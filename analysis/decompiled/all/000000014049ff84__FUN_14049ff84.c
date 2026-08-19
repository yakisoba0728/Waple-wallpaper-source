// Function: FUN_14049ff84
// Addr: 14049ff84
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x00014049ff9c) overlaps instruction at (ram,0x00014049ff9b)
    */
/* WARNING: Control flow encountered bad instruction data */

void FUN_14049ff84(longlong param_1,byte *param_2,undefined8 param_3,undefined1 *param_4)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *in_RAX;
  char *pcVar5;
  
  *param_2 = *param_2 ^ (byte)param_2;
  uVar3 = (int)in_RAX + *in_RAX;
  if (param_1 == 1) {
    iVar4 = uVar3 + *(int *)(ulonglong)uVar3;
    cVar2 = in(0xf1);
    pcVar5 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar4 >> 8),cVar2);
    *param_4 = *param_4;
    *pcVar5 = *pcVar5 + cVar2;
    *pcVar5 = *pcVar5 + (char)((ulonglong)param_2 >> 8);
    pcVar1 = (code *)swi(1);
    (*pcVar1)(0,(byte)param_2 + (char)((uint)iVar4 >> 8));
    return;
  }
  in(0xf1);
  *param_4 = *param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

