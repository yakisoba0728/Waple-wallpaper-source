// Function: FUN_1404ba7f4
// Addr: 1404ba7f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba7f4(char param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  char *in_RAX;
  char unaff_SPL;
  char *unaff_RDI;
  undefined2 in_GS;
  byte *pbVar4;
  
  *(undefined2 *)(unaff_RDI + 0x521004a) = in_GS;
  uVar2 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + *in_RAX) + 0xa70004f4;
  pbVar4 = (byte *)(ulonglong)uVar2;
  out(param_2,uVar2);
  *pbVar4 = *pbVar4 & (byte)uVar2;
  *unaff_RDI = *unaff_RDI + param_1;
  *param_4 = *param_4 + unaff_SPL;
  iVar3 = CONCAT31((int3)(uVar2 >> 8),
                   (byte)uVar2 | *(byte *)((longlong)pbVar4 * 2) | (byte)(uVar2 >> 8)) + 0x9540500;
  bVar1 = (char)iVar3 * '\x02';
  uVar2 = CONCAT31((int3)((uint)iVar3 >> 8),bVar1);
  out(param_2,uVar2);
  *(byte *)(ulonglong)uVar2 = *(byte *)(ulonglong)uVar2 & bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

