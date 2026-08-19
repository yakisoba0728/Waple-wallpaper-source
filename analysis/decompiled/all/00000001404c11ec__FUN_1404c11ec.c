// Function: FUN_1404c11ec
// Addr: 1404c11ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c1201) overlaps instruction at (ram,0x0001404c1200)
    */

void FUN_1404c11ec(longlong param_1,byte *param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  char cVar5;
  uint in_EAX;
  uint uVar3;
  uint *puVar4;
  byte bVar6;
  byte bVar9;
  char *pcVar7;
  byte *pbVar8;
  undefined6 uVar10;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  int unaff_ESP;
  uint *unaff_RDI;
  char unaff_R12B;
  byte in_CF;
  
  uVar3 = (uint)in_CF;
  uVar1 = in_EAX + 0xe005601;
  pcVar7 = (char *)(param_1 + -1);
  if (pcVar7 == (char *)0x0 || uVar1 + uVar3 == 0) {
    if (SCARRY4(in_EAX,0xe005601) == SCARRY4(uVar1,uVar3)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(uint *)CONCAT44(unaff_0000001c,unaff_EBX) =
         (*(int *)CONCAT44(unaff_0000001c,unaff_EBX) - unaff_ESP) -
         (uint)(0xf1ffa9fe < in_EAX || CARRY4(uVar1,uVar3));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar7 = *pcVar7 + (char)unaff_EBX;
  uVar3 = uVar1 + uVar3 & *unaff_RDI;
  cRam00000001554c333d = cRam00000001554c333d + (char)param_2;
  *(int *)param_2 = *(int *)param_2 + unaff_EBX;
  *pcVar7 = *pcVar7 + (char)pcVar7;
  pbVar8 = (byte *)(param_1 + -2);
  if (pbVar8 == (byte *)0x0 || *pcVar7 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar2 = (char)uVar3 * '\x02';
  uVar1 = CONCAT31((int3)(uVar3 >> 8),bVar2);
  puVar4 = (uint *)(ulonglong)uVar1;
  *(byte *)puVar4 = (char)*puVar4 + bVar2;
  cVar5 = (char)(uVar3 >> 8);
  *pbVar8 = *pbVar8 + cVar5;
  *param_2 = *param_2 | bVar2;
  bVar6 = (byte)pbVar8;
  *(byte *)puVar4 = (char)*puVar4 + bVar6;
  if ((char)*puVar4 == '\0') {
    *(byte *)puVar4 = (char)*puVar4 + bVar2;
    if ((char)*puVar4 == '\0') {
      pbVar8[(longlong)(param_2 + 0x11840029)] = pbVar8[(longlong)(param_2 + 0x11840029)] + bVar2;
      *pbVar8 = *pbVar8 + unaff_R12B;
      *param_2 = *param_2 + bVar2;
      *(byte *)puVar4 = (char)*puVar4 + bVar2;
      if ((char)*puVar4 == '\0') {
        *puVar4 = *puVar4 & uVar1;
        *(byte *)puVar4 = (char)*puVar4 + bVar2;
        *param_2 = *param_2 & bVar6;
        *puVar4 = *puVar4 - uVar1;
        *puVar4 = *puVar4 - uVar1;
      }
      *(char *)puVar4 = (char)*puVar4 + cVar5;
      uVar10 = (undefined6)((ulonglong)pbVar8 >> 0x10);
      bVar9 = (byte)((ulonglong)pbVar8 >> 8) | *pbVar8;
      pbVar8 = (byte *)CONCAT62(uVar10,CONCAT11(bVar9,bVar6));
      pbVar8[(longlong)(param_2 + 0x11840029)] = pbVar8[(longlong)(param_2 + 0x11840029)] + bVar2;
      *pbVar8 = *pbVar8 + unaff_R12B;
      *(byte *)puVar4 = (char)*puVar4 + bVar2;
      *(char *)puVar4 = (char)*puVar4 + cVar5;
      pcVar7 = (char *)CONCAT62(uVar10,CONCAT11(bVar9 | *pbVar8,bVar6));
      pcVar7[(longlong)(param_2 + 0x11840029)] = pcVar7[(longlong)(param_2 + 0x11840029)] + bVar2;
      *pcVar7 = *pcVar7 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)((longlong)puVar4 + 0x350028fe) = *(char *)((longlong)puVar4 + 0x350028fe) + cVar5;
    switch(*puVar4) {
    case 2:
      goto code_r0x00000002;
    case 3:
      goto code_r0x00000003;
    case 4:
      goto code_r0x00000004;
    case 5:
      goto DAT_00000005;
    case 6:
      goto code_r0x00000006;
    case 7:
      goto code_r0x00000007;
    case 8:
      goto code_r0x00000008;
    case 9:
      goto DAT_00000009;
    case 10:
      goto code_r0x0000000a;
    case 0xb:
      goto code_r0x0000000b;
    case 0xc:
      goto code_r0x0000000c;
    case 0xd:
      goto DAT_0000000d;
    case 0xe:
      goto code_r0x0000000e;
    case 0xf:
      goto code_r0x0000000f;
    case 0x10:
      goto DAT_00000010;
    case 0x11:
      goto code_r0x00000011;
    case 0x12:
      goto code_r0x00000012;
    case 0x13:
      goto code_r0x00000013;
    case 0x14:
      goto code_r0x00000014;
    case 0x15:
      goto code_r0x00000015;
    case 0x16:
      goto code_r0x00000016;
    case 0x17:
      goto code_r0x00000017;
    case 0x18:
      goto code_r0x00000018;
    case 0x19:
      goto DAT_00000019;
    case 0x1a:
      goto code_r0x0000001a;
    case 0x1b:
      goto code_r0x0000001b;
    case 0x1c:
      goto code_r0x0000001c;
    case 0x1d:
      goto code_r0x0000001d;
    case 0x1e:
      goto code_r0x0000001e;
    case 0x1f:
      goto code_r0x0000001f;
    case 0x20:
      goto code_r0x00000020;
    case 0x21:
      goto code_r0x00000021;
    case 0x22:
      goto code_r0x00000022;
    case 0x23:
      goto code_r0x00000023;
    case 0x24:
      goto code_r0x00000024;
    case 0x25:
      goto code_r0x00000025;
    case 0x26:
      goto code_r0x00000026;
    case 0x27:
      goto code_r0x00000027;
    case 0x28:
      goto code_r0x00000028;
    case 0x29:
      goto code_r0x00000029;
    case 0x2a:
      goto code_r0x0000002a;
    case 0x2b:
      goto code_r0x0000002b;
    case 0x2c:
      goto code_r0x0000002c;
    case 0x2d:
      goto code_r0x0000002d;
    case 0x2e:
      goto code_r0x0000002e;
    case 0x2f:
      goto code_r0x0000002f;
    case 0x30:
      goto code_r0x00000030;
    case 0x31:
      goto code_r0x00000031;
    case 0x32:
      goto code_r0x00000032;
    case 0x33:
      goto code_r0x00000033;
    case 0x34:
      goto code_r0x00000034;
    case 0x35:
      goto code_r0x00000035;
    case 0x36:
      goto code_r0x00000036;
    case 0x37:
      goto code_r0x00000037;
    case 0x38:
      goto code_r0x00000038;
    case 0x39:
      goto code_r0x00000039;
    case 0x3a:
      goto code_r0x0000003a;
    case 0x3b:
      goto code_r0x0000003b;
    case 0x3c:
      goto code_r0x0000003c;
    case 0x3d:
      goto code_r0x0000003d;
    case 0x3e:
      goto code_r0x0000003e;
    case 0x3f:
      goto code_r0x0000003f;
    case 0x40:
      goto code_r0x00000040;
    case 0x41:
      goto code_r0x00000041;
    case 0x42:
      goto code_r0x00000042;
    case 0x43:
      goto code_r0x00000043;
    case 0x44:
      goto code_r0x00000044;
    case 0x45:
      goto code_r0x00000045;
    case 0x46:
      goto code_r0x00000046;
    case 0x47:
      goto code_r0x00000047;
    case 0x48:
      goto code_r0x00000048;
    case 0x49:
      goto code_r0x00000049;
    case 0x4a:
      goto code_r0x0000004a;
    case 0x4b:
      goto code_r0x0000004b;
    case 0x4c:
      goto code_r0x0000004c;
    case 0x4d:
      goto code_r0x0000004d;
    case 0x4e:
      goto code_r0x0000004e;
    case 0x4f:
      goto code_r0x0000004f;
    case 0x50:
      goto code_r0x00000050;
    case 0x51:
      goto code_r0x00000051;
    case 0x52:
      goto code_r0x00000052;
    case 0x53:
      goto code_r0x00000053;
    case 0x54:
      goto code_r0x00000054;
    case 0x55:
      goto code_r0x00000055;
    case 0x56:
      goto code_r0x00000056;
    case 0x57:
      goto code_r0x00000057;
    case 0x58:
      goto code_r0x00000058;
    case 0x59:
      goto code_r0x00000059;
    case 0x5a:
      goto code_r0x0000005a;
    case 0x5b:
      goto code_r0x0000005b;
    case 0x5c:
      goto code_r0x0000005c;
    case 0x5d:
      goto code_r0x0000005d;
    case 0x5e:
      goto code_r0x0000005e;
    case 0x5f:
      goto code_r0x0000005f;
    case 0x60:
      goto code_r0x00000060;
    case 0x61:
      goto code_r0x00000061;
    case 0x62:
      goto code_r0x00000062;
    case 99:
      goto code_r0x00000063;
    case 100:
      goto code_r0x00000064;
    case 0x65:
      goto code_r0x00000065;
    case 0x66:
      goto code_r0x00000066;
    case 0x67:
      goto code_r0x00000067;
    case 0x68:
      goto code_r0x00000068;
    case 0x69:
      goto code_r0x00000069;
    case 0x6a:
      goto code_r0x0000006a;
    case 0x6b:
      goto code_r0x0000006b;
    case 0x6c:
      goto code_r0x0000006c;
    case 0x6d:
      goto code_r0x0000006d;
    case 0x6e:
      goto code_r0x0000006e;
    case 0x6f:
      goto code_r0x0000006f;
    case 0x70:
      goto code_r0x00000070;
    case 0x71:
      goto code_r0x00000071;
    case 0x72:
      goto code_r0x00000072;
    case 0x73:
      goto code_r0x00000073;
    case 0x74:
      goto code_r0x00000074;
    case 0x75:
      goto code_r0x00000075;
    case 0x76:
      goto code_r0x00000076;
    case 0x77:
      goto code_r0x00000077;
    case 0x78:
      goto code_r0x00000078;
    case 0x79:
      goto code_r0x00000079;
    case 0x7a:
      goto code_r0x0000007a;
    case 0x7b:
      goto code_r0x0000007b;
    case 0x7c:
      goto code_r0x0000007c;
    case 0x7d:
      goto code_r0x0000007d;
    case 0x7e:
      goto code_r0x0000007e;
    case 0x7f:
      goto code_r0x0000007f;
    case 0x80:
      goto code_r0x00000080;
    case 0x81:
      goto code_r0x00000081;
    case 0x82:
      goto code_r0x00000082;
    case 0x83:
      goto code_r0x00000083;
    case 0x84:
      goto code_r0x00000084;
    case 0x85:
      goto code_r0x00000085;
    case 0x86:
      goto code_r0x00000086;
    case 0x87:
      goto code_r0x00000087;
    case 0x88:
      goto code_r0x00000088;
    case 0x89:
      goto code_r0x00000089;
    case 0x8a:
      goto code_r0x0000008a;
    case 0x8b:
      goto code_r0x0000008b;
    case 0x8c:
      goto code_r0x0000008c;
    case 0x8d:
      goto code_r0x0000008d;
    case 0x8e:
      goto code_r0x0000008e;
    case 0x8f:
      goto code_r0x0000008f;
    case 0x90:
      goto code_r0x00000090;
    case 0x91:
      goto code_r0x00000091;
    case 0x92:
      goto code_r0x00000092;
    case 0x93:
      goto code_r0x00000093;
    case 0x94:
      goto code_r0x00000094;
    case 0x95:
      goto code_r0x00000095;
    case 0x96:
      goto code_r0x00000096;
    case 0x97:
      goto code_r0x00000097;
    case 0x98:
      goto code_r0x00000098;
    case 0x99:
      goto code_r0x00000099;
    case 0x9a:
      goto code_r0x0000009a;
    case 0x9b:
      goto code_r0x0000009b;
    case 0x9c:
      goto code_r0x0000009c;
    case 0x9d:
      goto code_r0x0000009d;
    case 0x9e:
      goto code_r0x0000009e;
    case 0x9f:
      goto code_r0x0000009f;
    case 0xa0:
      goto code_r0x000000a0;
    case 0xa1:
      goto code_r0x000000a1;
    case 0xa2:
      goto code_r0x000000a2;
    case 0xa3:
      goto code_r0x000000a3;
    case 0xa4:
      goto code_r0x000000a4;
    case 0xa5:
      goto code_r0x000000a5;
    case 0xa6:
      goto code_r0x000000a6;
    case 0xa7:
      goto code_r0x000000a7;
    case 0xa8:
      goto code_r0x000000a8;
    case 0xa9:
      goto code_r0x000000a9;
    case 0xaa:
      goto code_r0x000000aa;
    case 0xab:
      goto code_r0x000000ab;
    case 0xac:
      goto code_r0x000000ac;
    case 0xad:
      goto code_r0x000000ad;
    case 0xae:
      goto code_r0x000000ae;
    case 0xaf:
      goto code_r0x000000af;
    case 0xb0:
      goto code_r0x000000b0;
    case 0xb1:
      goto code_r0x000000b1;
    case 0xb2:
      goto code_r0x000000b2;
    case 0xb3:
      goto code_r0x000000b3;
    case 0xb4:
      goto code_r0x000000b4;
    case 0xb5:
      goto code_r0x000000b5;
    case 0xb6:
      goto code_r0x000000b6;
    case 0xb7:
      goto code_r0x000000b7;
    case 0xb8:
      goto code_r0x000000b8;
    case 0xb9:
      goto code_r0x000000b9;
    case 0xba:
      goto code_r0x000000ba;
    case 0xbb:
      goto code_r0x000000bb;
    case 0xbc:
      goto code_r0x000000bc;
    case 0xbd:
      goto code_r0x000000bd;
    case 0xbe:
      goto code_r0x000000be;
    case 0xbf:
      goto code_r0x000000bf;
    case 0xc0:
      goto code_r0x000000c0;
    case 0xc1:
      goto code_r0x000000c1;
    case 0xc2:
      goto code_r0x000000c2;
    case 0xc3:
      goto code_r0x000000c3;
    case 0xc4:
      goto code_r0x000000c4;
    case 0xc5:
      goto code_r0x000000c5;
    case 0xc6:
      goto code_r0x000000c6;
    case 199:
      goto code_r0x000000c7;
    case 200:
      goto code_r0x000000c8;
    case 0xc9:
      goto code_r0x000000c9;
    case 0xca:
      goto code_r0x000000ca;
    case 0xcb:
      goto code_r0x000000cb;
    case 0xcc:
      goto code_r0x000000cc;
    case 0xcd:
      goto code_r0x000000cd;
    case 0xce:
      goto code_r0x000000ce;
    case 0xcf:
      goto code_r0x000000cf;
    case 0xd0:
      goto code_r0x000000d0;
    case 0xd1:
      goto code_r0x000000d1;
    case 0xd2:
      goto code_r0x000000d2;
    case 0xd3:
      goto code_r0x000000d3;
    case 0xd4:
      goto code_r0x000000d4;
    case 0xd5:
      goto code_r0x000000d5;
    case 0xd6:
      goto code_r0x000000d6;
    case 0xd7:
      goto code_r0x000000d7;
    case 0xd8:
      goto code_r0x000000d8;
    case 0xd9:
      goto code_r0x000000d9;
    case 0xda:
      goto code_r0x000000da;
    case 0xdb:
      goto code_r0x000000db;
    case 0xdc:
      goto code_r0x000000dc;
    case 0xdd:
      goto code_r0x000000dd;
    case 0xde:
      goto code_r0x000000de;
    case 0xdf:
      goto code_r0x000000df;
    case 0xe0:
      goto code_r0x000000e0;
    case 0xe1:
      goto code_r0x000000e1;
    case 0xe2:
      goto code_r0x000000e2;
    case 0xe3:
      goto code_r0x000000e3;
    case 0xe4:
      goto code_r0x000000e4;
    case 0xe5:
      goto code_r0x000000e5;
    case 0xe6:
      goto code_r0x000000e6;
    case 0xe7:
      goto code_r0x000000e7;
    case 0xe8:
      goto code_r0x000000e8;
    case 0xe9:
      goto code_r0x000000e9;
    case 0xea:
      goto code_r0x000000ea;
    case 0xeb:
      goto code_r0x000000eb;
    case 0xec:
      goto code_r0x000000ec;
    case 0xed:
      goto code_r0x000000ed;
    case 0xee:
      goto code_r0x000000ee;
    case 0xef:
      goto code_r0x000000ef;
    case 0xf0:
      goto code_r0x000000f0;
    case 0xf1:
      goto code_r0x000000f1;
    case 0xf2:
      goto code_r0x000000f2;
    case 0xf3:
      goto code_r0x000000f3;
    case 0xf4:
      goto code_r0x000000f4;
    case 0xf5:
      goto code_r0x000000f5;
    case 0xf6:
      goto code_r0x000000f6;
    case 0xf7:
      goto code_r0x000000f7;
    case 0xf8:
      goto code_r0x000000f8;
    case 0xf9:
      goto code_r0x000000f9;
    case 0xfa:
      goto code_r0x000000fa;
    case 0xfb:
      goto code_r0x000000fb;
    case 0xfc:
      goto code_r0x000000fc;
    case 0xfd:
      goto code_r0x000000fd;
    case 0xfe:
      goto code_r0x000000fe;
    case 0xff:
      goto code_r0x000000ff;
    }
  }
  else {
    *(char *)((longlong)puVar4 + 0x350028fe) = *(char *)((longlong)puVar4 + 0x350028fe) + cVar5;
    switch(*puVar4) {
    case 2:
code_r0x00000002:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 3:
code_r0x00000003:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 4:
code_r0x00000004:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 5:
DAT_00000005:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 6:
code_r0x00000006:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 7:
code_r0x00000007:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 8:
code_r0x00000008:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 9:
DAT_00000009:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 10:
code_r0x0000000a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xb:
code_r0x0000000b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xc:
code_r0x0000000c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xd:
DAT_0000000d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xe:
code_r0x0000000e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xf:
code_r0x0000000f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x10:
DAT_00000010:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x11:
code_r0x00000011:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x12:
code_r0x00000012:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x13:
code_r0x00000013:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x14:
code_r0x00000014:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x15:
code_r0x00000015:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x16:
code_r0x00000016:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x17:
code_r0x00000017:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x18:
code_r0x00000018:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x19:
DAT_00000019:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1a:
code_r0x0000001a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1b:
code_r0x0000001b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1c:
code_r0x0000001c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1d:
code_r0x0000001d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1e:
code_r0x0000001e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1f:
code_r0x0000001f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x20:
code_r0x00000020:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x21:
code_r0x00000021:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x22:
code_r0x00000022:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x23:
code_r0x00000023:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x24:
code_r0x00000024:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x25:
code_r0x00000025:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x26:
code_r0x00000026:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x27:
code_r0x00000027:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x28:
code_r0x00000028:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x29:
code_r0x00000029:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2a:
code_r0x0000002a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2b:
code_r0x0000002b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2c:
code_r0x0000002c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2d:
code_r0x0000002d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2e:
code_r0x0000002e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2f:
code_r0x0000002f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x30:
code_r0x00000030:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x31:
code_r0x00000031:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x32:
code_r0x00000032:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x33:
code_r0x00000033:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x34:
code_r0x00000034:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x35:
code_r0x00000035:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x36:
code_r0x00000036:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x37:
code_r0x00000037:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x38:
code_r0x00000038:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x39:
code_r0x00000039:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x3a:
code_r0x0000003a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x3b:
code_r0x0000003b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x3c:
code_r0x0000003c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x3d:
code_r0x0000003d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x3e:
code_r0x0000003e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x3f:
code_r0x0000003f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x40:
code_r0x00000040:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x41:
code_r0x00000041:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x42:
code_r0x00000042:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x43:
code_r0x00000043:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x44:
code_r0x00000044:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x45:
code_r0x00000045:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x46:
code_r0x00000046:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x47:
code_r0x00000047:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x48:
code_r0x00000048:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x49:
code_r0x00000049:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x4a:
code_r0x0000004a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x4b:
code_r0x0000004b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x4c:
code_r0x0000004c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x4d:
code_r0x0000004d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x4e:
code_r0x0000004e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x4f:
code_r0x0000004f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x50:
code_r0x00000050:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x51:
code_r0x00000051:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x52:
code_r0x00000052:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x53:
code_r0x00000053:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x54:
code_r0x00000054:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x55:
code_r0x00000055:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x56:
code_r0x00000056:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x57:
code_r0x00000057:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x58:
code_r0x00000058:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x59:
code_r0x00000059:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x5a:
code_r0x0000005a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x5b:
code_r0x0000005b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x5c:
code_r0x0000005c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x5d:
code_r0x0000005d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x5e:
code_r0x0000005e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x5f:
code_r0x0000005f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x60:
code_r0x00000060:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x61:
code_r0x00000061:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x62:
code_r0x00000062:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 99:
code_r0x00000063:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 100:
code_r0x00000064:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x65:
code_r0x00000065:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x66:
code_r0x00000066:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x67:
code_r0x00000067:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x68:
code_r0x00000068:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x69:
code_r0x00000069:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x6a:
code_r0x0000006a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x6b:
code_r0x0000006b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x6c:
code_r0x0000006c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x6d:
code_r0x0000006d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x6e:
code_r0x0000006e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x6f:
code_r0x0000006f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x70:
code_r0x00000070:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x71:
code_r0x00000071:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x72:
code_r0x00000072:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x73:
code_r0x00000073:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x74:
code_r0x00000074:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x75:
code_r0x00000075:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x76:
code_r0x00000076:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x77:
code_r0x00000077:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x78:
code_r0x00000078:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x79:
code_r0x00000079:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x7a:
code_r0x0000007a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x7b:
code_r0x0000007b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x7c:
code_r0x0000007c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x7d:
code_r0x0000007d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x7e:
code_r0x0000007e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x7f:
code_r0x0000007f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x80:
code_r0x00000080:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x81:
code_r0x00000081:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x82:
code_r0x00000082:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x83:
code_r0x00000083:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x84:
code_r0x00000084:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x85:
code_r0x00000085:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x86:
code_r0x00000086:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x87:
code_r0x00000087:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x88:
code_r0x00000088:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x89:
code_r0x00000089:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x8a:
code_r0x0000008a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x8b:
code_r0x0000008b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x8c:
code_r0x0000008c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x8d:
code_r0x0000008d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x8e:
code_r0x0000008e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x8f:
code_r0x0000008f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x90:
code_r0x00000090:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x91:
code_r0x00000091:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x92:
code_r0x00000092:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x93:
code_r0x00000093:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x94:
code_r0x00000094:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x95:
code_r0x00000095:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x96:
code_r0x00000096:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x97:
code_r0x00000097:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x98:
code_r0x00000098:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x99:
code_r0x00000099:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x9a:
code_r0x0000009a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x9b:
code_r0x0000009b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x9c:
code_r0x0000009c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x9d:
code_r0x0000009d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x9e:
code_r0x0000009e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x9f:
code_r0x0000009f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xa0:
code_r0x000000a0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xa1:
code_r0x000000a1:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xa2:
code_r0x000000a2:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xa3:
code_r0x000000a3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xa4:
code_r0x000000a4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xa5:
code_r0x000000a5:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xa6:
code_r0x000000a6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xa7:
code_r0x000000a7:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xa8:
code_r0x000000a8:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xa9:
code_r0x000000a9:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xaa:
code_r0x000000aa:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xab:
code_r0x000000ab:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xac:
code_r0x000000ac:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xad:
code_r0x000000ad:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xae:
code_r0x000000ae:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xaf:
code_r0x000000af:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xb0:
code_r0x000000b0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xb1:
code_r0x000000b1:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xb2:
code_r0x000000b2:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xb3:
code_r0x000000b3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xb4:
code_r0x000000b4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xb5:
code_r0x000000b5:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xb6:
code_r0x000000b6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xb7:
code_r0x000000b7:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xb8:
code_r0x000000b8:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xb9:
code_r0x000000b9:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xba:
code_r0x000000ba:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xbb:
code_r0x000000bb:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xbc:
code_r0x000000bc:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xbd:
code_r0x000000bd:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xbe:
code_r0x000000be:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xbf:
code_r0x000000bf:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xc0:
code_r0x000000c0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xc1:
code_r0x000000c1:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xc2:
code_r0x000000c2:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xc3:
code_r0x000000c3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xc4:
code_r0x000000c4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xc5:
code_r0x000000c5:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xc6:
code_r0x000000c6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 199:
code_r0x000000c7:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 200:
code_r0x000000c8:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xc9:
code_r0x000000c9:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xca:
code_r0x000000ca:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xcb:
code_r0x000000cb:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xcc:
code_r0x000000cc:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xcd:
code_r0x000000cd:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xce:
code_r0x000000ce:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xcf:
code_r0x000000cf:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xd0:
code_r0x000000d0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xd1:
code_r0x000000d1:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xd2:
code_r0x000000d2:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xd3:
code_r0x000000d3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xd4:
code_r0x000000d4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xd5:
code_r0x000000d5:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xd6:
code_r0x000000d6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xd7:
code_r0x000000d7:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xd8:
code_r0x000000d8:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xd9:
code_r0x000000d9:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xda:
code_r0x000000da:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xdb:
code_r0x000000db:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xdc:
code_r0x000000dc:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xdd:
code_r0x000000dd:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xde:
code_r0x000000de:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xdf:
code_r0x000000df:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xe0:
code_r0x000000e0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xe1:
code_r0x000000e1:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xe2:
code_r0x000000e2:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xe3:
code_r0x000000e3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xe4:
code_r0x000000e4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xe5:
code_r0x000000e5:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xe6:
code_r0x000000e6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xe7:
code_r0x000000e7:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xe8:
code_r0x000000e8:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xe9:
code_r0x000000e9:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xea:
code_r0x000000ea:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xeb:
code_r0x000000eb:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xec:
code_r0x000000ec:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xed:
code_r0x000000ed:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xee:
code_r0x000000ee:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xef:
code_r0x000000ef:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xf0:
code_r0x000000f0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xf1:
code_r0x000000f1:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xf2:
code_r0x000000f2:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xf3:
code_r0x000000f3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xf4:
code_r0x000000f4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xf5:
code_r0x000000f5:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xf6:
code_r0x000000f6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xf7:
code_r0x000000f7:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xf8:
code_r0x000000f8:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xf9:
code_r0x000000f9:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xfa:
code_r0x000000fa:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xfb:
code_r0x000000fb:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xfc:
code_r0x000000fc:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xfd:
code_r0x000000fd:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xfe:
code_r0x000000fe:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xff:
code_r0x000000ff:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

