// Function: FUN_1404bac88
// Addr: 1404bac88
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bac88(char *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int *in_RAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  longlong unaff_RBP;
  char in_CF;
  
  *(char *)((longlong)in_RAX + 0x780a0002) =
       *(char *)((longlong)in_RAX + 0x780a0002) + (char)param_1 + in_CF;
  iVar3 = (int)in_RAX + *in_RAX + 0x50000468;
  uVar4 = CONCAT22((short)((uint)iVar3 >> 0x10),
                   CONCAT11((char)((uint)iVar3 >> 8) + *param_1,(char)iVar3));
  *(char *)(param_2 + 2) = *(char *)(param_2 + 2) + unaff_BH;
  *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 & uVar4;
  *param_4 = *param_4 + unaff_SPL;
  uVar4 = uVar4 + 0xe4050002;
  bVar2 = (byte)uVar4 | *(byte *)(ulonglong)uVar4;
  uVar4 = CONCAT31((int3)(uVar4 >> 8),bVar2);
  if ((POPCOUNT(bVar2) & 1U) != 0) {
    *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 & uVar4;
  }
  SegmentLimit(*(undefined4 *)param_1);
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x2521004b +
                   unaff_RBP * 4);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

