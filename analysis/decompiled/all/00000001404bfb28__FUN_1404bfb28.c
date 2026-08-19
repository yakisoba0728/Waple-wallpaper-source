// Function: FUN_1404bfb28
// Addr: 1404bfb28
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bfb28(int param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  short sVar2;
  char *in_RAX;
  int *piVar4;
  byte bVar5;
  char cVar6;
  undefined6 uVar7;
  char unaff_BL;
  byte unaff_BH;
  char *unaff_RDI;
  uint *puVar3;
  
  uVar7 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar6 = (char)((ulonglong)param_2 >> 8);
  bVar5 = (byte)param_2 & unaff_BH;
  *param_4 = *param_4;
  cVar1 = (char)in_RAX;
  *in_RAX = *in_RAX + cVar1;
  in_RAX[-0x1dffd84c] = in_RAX[-0x1dffd84c] + cVar6;
  sVar2 = CONCAT11(0x27,cVar1);
  puVar3 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),sVar2);
  *(char *)puVar3 = (char)*puVar3 + '\'';
  *param_4 = *param_4 + cVar1;
  *puVar3 = *puVar3 | (uint)puVar3;
  *unaff_RDI = *unaff_RDI + cVar6;
  piVar4 = (int *)(ulonglong)(uint)(int)sVar2;
  *piVar4 = *piVar4 + (int)sVar2;
  *(char *)((longlong)piVar4 + 2) = *(char *)((longlong)piVar4 + 2) - unaff_BH;
  *(char *)CONCAT62(uVar7,CONCAT11(cVar6,bVar5)) =
       *(char *)CONCAT62(uVar7,CONCAT11(cVar6,bVar5)) + unaff_BL;
  *(char *)piVar4 = (char)*piVar4 + cVar1;
  *(int *)CONCAT62(uVar7,CONCAT11(cVar6,bVar5)) =
       *(int *)CONCAT62(uVar7,CONCAT11(cVar6,bVar5)) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

