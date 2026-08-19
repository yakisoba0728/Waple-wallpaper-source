// Function: FUN_14049ff64
// Addr: 14049ff64
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x00014049ff9c) overlaps instruction at (ram,0x00014049ff9b)
    */
/* WARNING: Control flow encountered bad instruction data */

void FUN_14049ff64(undefined4 *param_1,byte *param_2,undefined8 param_3,undefined1 *param_4)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *in_RAX;
  char *pcVar6;
  char cVar7;
  int *piVar5;
  
  cVar7 = (char)((ulonglong)param_2 >> 8);
  *param_1 = (int)param_2;
  uVar3 = (int)in_RAX + *in_RAX;
  pcVar6 = (char *)((longlong)param_1 + -1);
  if (pcVar6 != (char *)0x0 && uVar3 != 0) {
    *pcVar6 = *pcVar6 + (char)(uVar3 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while( true ) {
    piVar5 = (int *)(ulonglong)uVar3;
    *param_4 = *param_4;
    *(char *)piVar5 = (char)*piVar5 + (char)uVar3;
    *(char *)((longlong)piVar5 + 0x11) = *(char *)((longlong)piVar5 + 0x11) + cVar7;
    iVar4 = *piVar5;
    *(int *)pcVar6 = (int)param_2;
    iVar4 = uVar3 + iVar4 + *(int *)(ulonglong)(uVar3 + iVar4);
    if (pcVar6 + -1 == (char *)0x0 || iVar4 == 0) break;
    uVar3 = in((short)param_2);
    pcVar6 = pcVar6 + -1;
  }
  *param_4 = *param_4;
  uVar3 = iVar4 + 0x54050002;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),(byte)uVar3 | *(byte *)(ulonglong)uVar3);
  *param_2 = *param_2 ^ (byte)param_2;
  uVar3 = uVar3 + *(int *)(ulonglong)uVar3;
  if (pcVar6 == (char *)0x2) {
    iVar4 = uVar3 + *(int *)(ulonglong)uVar3;
    cVar2 = in(0xf1);
    pcVar6 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar4 >> 8),cVar2);
    *param_4 = *param_4;
    *pcVar6 = *pcVar6 + cVar2;
    *pcVar6 = *pcVar6 + cVar7;
    pcVar1 = (code *)swi(1);
    (*pcVar1)(0,(byte)param_2 + (char)((uint)iVar4 >> 8));
    return;
  }
  in(0xf1);
  *param_4 = *param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

