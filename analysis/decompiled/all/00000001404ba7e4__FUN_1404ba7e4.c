// Function: FUN_1404ba7e4
// Addr: 1404ba7e4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba7e4(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined8 in_RAX;
  undefined2 uVar5;
  char unaff_SPL;
  longlong unaff_RDI;
  undefined2 in_GS;
  byte *pbVar4;
  
  uVar5 = (undefined2)param_2;
  uVar2 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((byte)((ulonglong)in_RAX >> 8) | *(byte *)(param_2 + param_1),
                                 (char)in_RAX)) + 0x80000834;
  pbVar4 = (byte *)(ulonglong)uVar2;
  out(uVar5,uVar2);
  bVar1 = (byte)uVar2;
  *pbVar4 = *pbVar4 & bVar1;
  out(uVar5,uVar2);
  *pbVar4 = *pbVar4 & bVar1;
  *(undefined2 *)(unaff_RDI + 0x521004e) = in_GS;
  uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar1 + *pbVar4) + 0xa70004f4;
  pbVar4 = (byte *)(ulonglong)uVar2;
  out(uVar5,uVar2);
  *pbVar4 = *pbVar4 & (byte)uVar2;
  *(char *)(unaff_RDI + 4) = *(char *)(unaff_RDI + 4) + (char)param_1;
  *param_4 = *param_4 + unaff_SPL;
  iVar3 = CONCAT31((int3)(uVar2 >> 8),
                   (byte)uVar2 | *(byte *)((longlong)pbVar4 * 2) | (byte)(uVar2 >> 8)) + 0x9540500;
  bVar1 = (char)iVar3 * '\x02';
  uVar2 = CONCAT31((int3)((uint)iVar3 >> 8),bVar1);
  out(uVar5,uVar2);
  *(byte *)(ulonglong)uVar2 = *(byte *)(ulonglong)uVar2 & bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

