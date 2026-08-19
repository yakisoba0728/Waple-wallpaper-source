// Function: FUN_1404bd2e8
// Addr: 1404bd2e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd2e8(byte *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint *in_RAX;
  byte bVar4;
  char unaff_BL;
  char unaff_SPL;
  byte *unaff_RDI;
  
  bVar4 = (byte)param_1;
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar2 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + (byte)in_RAX;
  *unaff_RDI = *unaff_RDI << 1 | CARRY1((byte)uVar2,(byte)in_RAX);
  uVar2 = (uint)in_RAX & 0x25180e00;
  param_1[param_2 * 8 + 0x521004b] = param_1[param_2 * 8 + 0x521004b] + unaff_BL;
  uVar2 = CONCAT31((int3)(uVar2 >> 8),*(undefined1 *)(ulonglong)uVar2);
  iVar3 = uVar2 + 0xf0000664;
  bVar1 = *param_1;
  *param_1 = *param_1 + bVar4;
  uVar2 = (CONCAT31((int3)((uint)iVar3 >> 8),((char)iVar3 + -0x25) - (0xffff99b < uVar2)) +
          0x121fffdb) - (uint)CARRY1(bVar1,bVar4);
  *param_4 = *param_4 + unaff_SPL;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
  *param_1 = *param_1 + bVar4;
  *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

