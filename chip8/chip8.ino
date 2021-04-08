#include <TVout.h>
#include <fontALL.h>

#define uint8_t u8
#define uint16_t u16

PROGMEM const u8 maze[38] = {
  0x60, 0x00, 0x61, 0x00, 0xa2, 0x22, 0xc2, 0x01, 0x32, 0x01, 0xa2, 0x1e, 0xd0, 0x14, 0x70, 0x04,
  0x30, 0x40, 0x12, 0x04, 0x60, 0x00, 0x71, 0x04, 0x31, 0x20, 0x12, 0x04, 0x12, 0x1c, 0x80, 0x40,
  0x20, 0x10, 0x20, 0x40, 0x80, 0x10
};

PROGMEM const u8 UFO[224] = {
  0xa2, 0xcd, 0x69, 0x38, 0x6a, 0x08, 0xd9, 0xa3, 0xa2, 0xd0, 0x6b, 0x00,
  0x6c, 0x03, 0xdb, 0xc3, 0xa2, 0xd6, 0x64, 0x1d, 0x65, 0x1f, 0xd4, 0x51,
  0x67, 0x00, 0x68, 0x0f, 0x22, 0xa2, 0x22, 0xac, 0x48, 0x00, 0x12, 0x22,
  0x64, 0x1e, 0x65, 0x1c, 0xa2, 0xd3, 0xd4, 0x53, 0x6e, 0x00, 0x66, 0x80,
  0x6d, 0x04, 0xed, 0xa1, 0x66, 0xff, 0x6d, 0x05, 0xed, 0xa1, 0x66, 0x00,
  0x6d, 0x06, 0xed, 0xa1, 0x66, 0x01, 0x36, 0x80, 0x22, 0xd8, 0xa2, 0xd0,
  0xdb, 0xc3, 0xcd, 0x01, 0x8b, 0xd4, 0xdb, 0xc3, 0x3f, 0x00, 0x12, 0x92,
  0xa2, 0xcd, 0xd9, 0xa3, 0xcd, 0x01, 0x3d, 0x00, 0x6d, 0xff, 0x79, 0xfe,
  0xd9, 0xa3, 0x3f, 0x00, 0x12, 0x8c, 0x4e, 0x00, 0x12, 0x2e, 0xa2, 0xd3,
  0xd4, 0x53, 0x45, 0x00, 0x12, 0x86, 0x75, 0xff, 0x84, 0x64, 0xd4, 0x53,
  0x3f, 0x01, 0x12, 0x46, 0x6d, 0x08, 0x8d, 0x52, 0x4d, 0x08, 0x12, 0x8c,
  0x12, 0x92, 0x22, 0xac, 0x78, 0xff, 0x12, 0x1e, 0x22, 0xa2, 0x77, 0x05,
  0x12, 0x96, 0x22, 0xa2, 0x77, 0x0f, 0x22, 0xa2, 0x6d, 0x03, 0xfd, 0x18,
  0xa2, 0xd3, 0xd4, 0x53, 0x12, 0x86, 0xa2, 0xf8, 0xf7, 0x33, 0x63, 0x00,
  0x22, 0xb6, 0x00, 0xee, 0xa2, 0xf8, 0xf8, 0x33, 0x63, 0x32, 0x22, 0xb6,
  0x00, 0xee, 0x6d, 0x1b, 0xf2, 0x65, 0xf0, 0x29, 0xd3, 0xd5, 0x73, 0x05,
  0xf1, 0x29, 0xd3, 0xd5, 0x73, 0x05, 0xf2, 0x29, 0xd3, 0xd5, 0x00, 0xee,
  0x01, 0x7c, 0xfe, 0x7c, 0x60, 0xf0, 0x60, 0x40, 0xe0, 0xa0, 0xf8, 0xd4,
  0x6e, 0x01, 0x6d, 0x10, 0xfd, 0x18, 0x00, 0xee
};

PROGMEM const unsigned char MISSILE[180] = {
  0x12, 0x19, 0x4d, 0x49, 0x53, 0x53, 0x49, 0x4c, 0x45, 0x20, 0x62, 0x79,
  0x20, 0x44, 0x61, 0x76, 0x69, 0x64, 0x20, 0x57, 0x49, 0x4e, 0x54, 0x45,
  0x52, 0x6c, 0x0c, 0x60, 0x00, 0x61, 0x00, 0x65, 0x08, 0x66, 0x0a, 0x67,
  0x00, 0x6e, 0x01, 0xa2, 0xad, 0xd0, 0x14, 0x70, 0x08, 0x30, 0x40, 0x12,
  0x29, 0x60, 0x00, 0x61, 0x1c, 0xa2, 0xb0, 0xd0, 0x14, 0xa2, 0xb0, 0xd0,
  0x14, 0x3e, 0x01, 0x12, 0x49, 0x70, 0x04, 0x40, 0x38, 0x6e, 0x00, 0x12,
  0x4f, 0x70, 0xfc, 0x40, 0x00, 0x6e, 0x01, 0xd0, 0x14, 0xfc, 0x15, 0xfb,
  0x07, 0x3b, 0x00, 0x12, 0x53, 0x62, 0x08, 0xe2, 0x9e, 0x12, 0x95, 0x3c,
  0x00, 0x7c, 0xfe, 0x63, 0x1b, 0x82, 0x00, 0xa2, 0xb0, 0xd2, 0x31, 0x64,
  0x00, 0xd2, 0x31, 0x73, 0xff, 0xd2, 0x31, 0x3f, 0x00, 0x64, 0x01, 0x33,
  0x03, 0x12, 0x6d, 0xd2, 0x31, 0x34, 0x01, 0x12, 0x91, 0x77, 0x05, 0x75,
  0xff, 0x82, 0x00, 0x63, 0x00, 0xa2, 0xad, 0xd2, 0x34, 0x45, 0x00, 0x12,
  0x97, 0x76, 0xff, 0x36, 0x00, 0x12, 0x39, 0xa2, 0xb4, 0xf7, 0x33, 0xf2,
  0x65, 0x63, 0x1b, 0x64, 0x0d, 0xf1, 0x29, 0xd3, 0x45, 0x73, 0x05, 0xf2,
  0x29, 0xd3, 0x45, 0x12, 0xab, 0x10, 0x38, 0x38, 0x10, 0x38, 0x7c, 0xfe
};

PROGMEM const u8 fonts[80] = {
  0xF0, 0x90, 0x90, 0x90, 0xF0,
  0x20, 0x60, 0x20, 0x20, 0x70,
  0xF0, 0x10, 0xF0, 0x80, 0xF0,
  0xF0, 0x10, 0xF0, 0x10, 0xF0,
  0x90, 0x90, 0xF0, 0x10, 0x10,
  0xF0, 0x80, 0xF0, 0x10, 0xF0,
  0xF0, 0x80, 0xF0, 0x90, 0xF0,
  0xF0, 0x10, 0x20, 0x40, 0x40,
  0xF0, 0x90, 0xF0, 0x90, 0xF0,
  0xF0, 0x90, 0xF0, 0x10, 0xF0,
  0xF0, 0x90, 0xF0, 0x90, 0x90,
  0xE0, 0x90, 0xE0, 0x90, 0xE0,
  0xF0, 0x80, 0x80, 0x80, 0xF0,
  0xE0, 0x90, 0x90, 0x90, 0xE0,
  0xF0, 0x80, 0xF0, 0x80, 0xF0,
  0xF0, 0x80, 0xF0, 0x80, 0x80
};

TVout tv;
u8 buf[2048];

u8 memory[4096];
u8 registers[16];
u8 key_inputs[16];
u8 stack_p = 0;
u16 stack[16];
u16 opcode = 0;
u16 index = 0;
u16 pc = 0x200;

bool should_draw = false;
bool should_exit = false;

u8 vx = 0;
u8 vy = 0;
u8 kk = 0;
u16 nnn = 0;

u8 dt = 0;
u8 st = 0;

u8 reverse_byte(u8 b) {
   b = (b & 0xF0) >> 4 | (b & 0x0F) << 4;
   b = (b & 0xCC) >> 2 | (b & 0x33) << 2;
   b = (b & 0xAA) >> 1 | (b & 0x55) << 1;
   return b;
}

void disp()
{
  for (u8 i = 0; i < 32; i++)
  {
    for (u8 j = 0; j < 64; j++)
    {
      tv.set_pixel(j, i, buf[i * 64 + j]);
    }
  }
}

u8 get_key()
{
  // реализовать!!!
  return 0;
}

void execute()
{
  u8 sprite_lines, sprite_data;
  u8 screen_x, screen_y;
  
  switch(opcode & 0xf000)
  {
    case 0x0000:
      switch (kk)
      {
        case 0x00e0:
          tv.clear_screen();
        break;
        case 0x0ee:
          pc = stack[--stack_p];
        break;
      }
    break;
    case 0x1000:
      pc = nnn;
    break;
    case 0x2000:
      stack_p++;
      stack[stack_p] = pc;
      pc = nnn;
    break;
    case 0x3000:
      if (registers[vx] == kk)
      {
        pc += 2;
      }
    break;
    case 0x4000:
      if (registers[vx] != kk)
      {
        pc += 2;
      }
    break;
    case 0x5000:
      if (registers[vx] == registers[vy])
      {
        pc += 2;
      }
    break;
    case 0x6000:
      registers[vx] = kk;
    break;
    case 0x7000:
      registers[vx] += kk;
    break;
    case 0x8000:
      switch (opcode & 0x000f)
      {
        case 0x0:
          registers[vx] = registers[vy];
        break;
        case 0x1:
          registers[vx] |= registers[vy];
        break;
        case 0x2:
          registers[vx] &= registers[vy];
        break;
        case 0x3:
          registers[vx] ^= registers[vy];
        break;
        case 0x4:
          if ((registers[vx] + registers[vy]) > 0xff)
          {
            registers[0xf] = 1;
          }
          else
          {
            registers[0xf] = 0;
          }
          registers[vx] += registers[vy];
        break;
        case 0x5:
          if (registers[vx] > registers[vy])
          {
            registers[0xf] = 1;
          }
          else
          {
            registers[0xf] = 0;
          }
          registers[vx] -= registers[vy];
        break;
        case 0x6:
          registers[0xf] = registers[vx] & 0x0001;
          registers[vx] >>= 1;
        break;
        case 0x7:
          if (registers[vy] > registers[vx])
          {
            registers[0xf] = 1;
          }
          else
          {
            registers[0xf] = 1;
          }
          registers[vx] = registers[vy] - registers[vx];
        break;
        case 0xe:
          registers[0xf] = (registers[vx] & 0x00f0) >> 7;
          registers[vx] = registers[vx] << 1;
        break;
      }
    break;
    case 0x9000:
      if (registers[vx] != registers[vy])
      {
        pc += 2;
      }
    break;
    case 0xa000:
      index = nnn;
    break;
    case 0xb000:
      pc = nnn + registers[0x0];
    break;
    case 0xc000:
      registers[vx] = random(0, 256) & kk;
    break;
    case 0xd000:
      sprite_lines = opcode & 0x000f;
      registers[0xf] = 0x0;
      
//      for (screen_y = 0; screen_y < sprite_lines; screen_y++)
//      {
//        sprite_data = memory[index + screen_y];
//
//        for (screen_x = 0; screen_x < 8; screen_x++)
//        {
//          if ((sprite_data & (0x80 >> screen_x)) != 0 && (screen_x + registers[vx] + ((screen_y + registers[vy]) * 64)) < 2048)
//          {
//            buf[((screen_x + registers[vx])) + ((screen_y + registers[vy]) * 64)] ^= (0x80 >> ((screen_x + registers[vx]) % 8));
////            buf[(registers[vx] + screen_x) + (registers[vy] + screen_y) * 64] ^= (sprite_data & (0x1 << screen_x)) >> screen_x;
//            if (tv.get_pixel(screen_x + registers[vx], screen_y + registers[vy]) == BLACK)
//              registers[0xf] = 0x01;
//          }
//        }
//      }
      for (screen_y = 0; screen_y < sprite_lines; screen_y++)
      {
        sprite_data = reverse_byte(memory[index + screen_y]);
        for (screen_x = 0; screen_x < 8; screen_x++)
        {
          buf[(registers[vx] + screen_x) + (registers[vy] + screen_y) * 64] ^= (sprite_data & (0x1 << screen_x)) >> screen_x;
        }
      }
      disp();
    break;
    case 0xe000:
      switch (kk)
      {
        case 0x009e:
          if (key_inputs[registers[vx] & 0xf] == 1)
          {
            pc += 2;
          }
        break;
        case 0x00a1:
          if (key_inputs[registers[vx] & 0xf] == 0)
          {
            pc += 2;
          }
        break;
      }
    break;
    case 0xf000:
      switch (kk)
      {
        case 0x0007:
          registers[vx] = dt;
        break;
        case 0x000a:
          if (get_key() >= 0)
          {
            registers[vx] = get_key();
          }
          else
          {
            pc -= 2;
          }
        break;
        case 0x015:
          dt = registers[vx];
        break;
        case 0x018:
          st = registers[vx];
        break;
        case 0x01e:
          index += registers[vx];
        break;
        case 0x0029:
          index = 5 * registers[vx];
        break;
        case 0x0033:
          memory[index] = (registers[vx] % 1000) / 100;
          memory[index + 1] = (registers[vx] % 100) / 10;
          memory[index + 2] = registers[vx] % 10;
        break;
        case 0x055:
          for (u8 i = 0; i <= vx; i++)
            memory[index + i] = registers[i];
        break;
        case 0x065:
          for (u8 i = 0; i <= vx; i++)
            registers[i] = memory[index + i];
        break;
      }
    break;
  }
}

void cycle()
{
  opcode = 0;
  opcode |= memory[pc];
  opcode <<= 8;
  opcode |= memory[pc + 1];

  pc += 2;
  vx = (opcode & 0x0f00) >> 8;
  vy = (opcode & 0x00f0) >> 4;
  kk = opcode & 0x00ff;
  nnn = opcode & 0x0fff;

  execute();

  if (dt > 0)
  {
    dt--;
  }
  
  if (st > 0)
  {
    dt--;
    if (dt == 0)
    {
      // sound
    }
  }
}

void setup() {
  tv.begin(NTSC,120,96);
  tv.select_font(font6x8);

  for (u16 i = 0; i < 224; i++) // load game
    memory[0x200 + i] = pgm_read_byte(UFO + i);
    
  for (u8 i = 0; i < 80; i++) // load fonts
    memory[i] = pgm_read_byte(fonts + i);
  
  randomSeed(analogRead(0));
  Serial.begin(9600);
}

void debug()
{
  Serial.print("Opcode: 0x");
  Serial.println(opcode, HEX);
  Serial.print("PC: 0x");
  Serial.println(pc, HEX);
  for (u8 i = 0; i < 16; i++)
  {
    Serial.print("V");
    Serial.print(i, HEX);
    Serial.print(" = 0x");
    Serial.println(registers[i], HEX);
  }
  Serial.print("I = 0x");
  Serial.println(index, HEX);
  Serial.print("nnn = 0x");
  Serial.println(nnn, HEX);
}

void loop() {
  cycle();
//  debug();
//  delay(500);
}
