// Function: FUN_1404d6de0
// Addr: 1404d6de0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6de0(undefined8 param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined2 uVar5;
  char cVar6;
  ulonglong in_RAX;
  char *pcVar7;
  char cVar9;
  char unaff_BL;
  undefined1 *unaff_RDI;
  char in_R11B;
  char unaff_R12B;
  longlong unaff_retaddr;
  char cVar8;
  
  cVar9 = (char)((ulonglong)param_1 >> 8);
  iVar2 = (int)(int *)(in_RAX | 100) + *(int *)(in_RAX | 100);
  uVar3 = (undefined2)param_2;
  *(byte *)(param_2 * 2) = *(byte *)(param_2 * 2) | (byte)param_2;
  cVar6 = (byte)iVar2 + 0x34;
  uVar4 = CONCAT31((int3)((uint)iVar2 >> 8),cVar6);
  *(int *)(ulonglong)uVar4 = *(int *)(ulonglong)uVar4 + uVar4 + (uint)(0xcb < (byte)iVar2);
  *(char *)(unaff_retaddr + 0x33) = *(char *)(unaff_retaddr + 0x33) + cVar9;
  uVar5 = (undefined2)((uint)iVar2 >> 0x10);
  cVar8 = (char)((uint)iVar2 >> 8) + cVar9;
  pcVar7 = (char *)(ulonglong)CONCAT22(uVar5,CONCAT11(cVar8,cVar6));
  uVar1 = in(uVar3);
  *unaff_RDI = uVar1;
  *param_4 = *param_4 + unaff_R12B;
  *pcVar7 = *pcVar7 + cVar6;
  *(char *)(unaff_retaddr + 0x33) = *(char *)(unaff_retaddr + 0x33) + unaff_BL;
  *(char *)(unaff_retaddr + 0x33) = *(char *)(unaff_retaddr + 0x33) + cVar9;
  pcVar7 = (char *)(ulonglong)CONCAT22(uVar5,CONCAT11(cVar8 + cVar9,cVar6));
  uVar1 = in(uVar3);
  unaff_RDI[1] = uVar1;
  *param_4 = *param_4 + unaff_R12B;
  *pcVar7 = *pcVar7 + cVar6;
  *pcVar7 = *pcVar7 + (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_retaddr + 0x33) = *(char *)(unaff_retaddr + 0x33) + unaff_BL;
  uVar1 = in(uVar3);
  unaff_RDI[2] = uVar1;
  *param_4 = *param_4 + in_R11B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

