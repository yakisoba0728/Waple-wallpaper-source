// Function: FUN_14049fef4
// Addr: 14049fef4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049fef4(byte param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  undefined8 in_RAX;
  int *piVar2;
  char *pcVar3;
  char unaff_SPL;
  uint *unaff_RDI;
  
  piVar2 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),0xf);
  uVar1 = (int)piVar2 + *piVar2;
  *unaff_RDI = *unaff_RDI >> (param_1 & 0x1f) | *unaff_RDI << 0x20 - (param_1 & 0x1f);
  pcVar3 = (char *)((ulonglong)(uVar1 + *(int *)(ulonglong)uVar1) ^ 0xe6);
  *param_4 = *param_4 + unaff_SPL;
  *pcVar3 = *pcVar3 + (char)pcVar3;
  pcVar3[-0x2cfffcf1] = pcVar3[-0x2cfffcf1] + (char)((ulonglong)param_2 >> 8);
  SegmentLimit(*(undefined4 *)pcVar3);
  *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

