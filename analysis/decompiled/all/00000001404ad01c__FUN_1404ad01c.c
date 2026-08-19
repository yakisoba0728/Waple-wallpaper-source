// Function: FUN_1404ad01c
// Addr: 1404ad01c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ad01d) overlaps instruction at (ram,0x0001404ad01c)
    */

void FUN_1404ad01c(longlong param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  char unaff_SPL;
  longlong in_FS_OFFSET;
  char in_ZF;
  
  if (param_1 != 1 && in_ZF == '\0') {
    uVar3 = in(param_2);
    *param_4 = *param_4 + unaff_SPL;
    bVar2 = (byte)uVar3;
    *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + bVar2;
    bVar4 = (byte)((ushort)param_2 >> 8);
    uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar2 + bVar4);
    piVar1 = (int *)(in_FS_OFFSET + (ulonglong)uVar3);
    *piVar1 = *piVar1 + uVar3 + (uint)CARRY1(bVar2,bVar4);
    in(param_2);
  }
  *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

