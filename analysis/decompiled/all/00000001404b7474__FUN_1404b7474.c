// Function: FUN_1404b7474
// Addr: 1404b7474
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7474(uint *param_1,uint *param_2)

{
  uint *puVar1;
  char *pcVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  char *in_RAX;
  longlong lVar6;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  undefined8 *puVar7;
  undefined8 *unaff_RBP;
  longlong unaff_RSI;
  uint unaff_EDI;
  undefined8 uStack_10;
  
  *param_1 = *param_1 & (uint)param_1;
  lVar6 = CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + *in_RAX);
  puVar1 = (uint *)(lVar6 + 0x47210020);
  *puVar1 = *puVar1 | unaff_EDI;
  iVar5 = (int)lVar6;
  uVar3 = iVar5 + 0xe2b8d600;
  pcVar2 = (char *)((ulonglong)uVar3 + 0x21004b73);
  *pcVar2 = *pcVar2 + (char)param_2;
  *param_2 = *param_2 | uVar3;
  uVar3 = *param_1;
  *(byte *)param_1 = (byte)*param_1 + (byte)param_1;
  puVar7 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar4 = '\t';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar7 = puVar7 + -1;
    *puVar7 = *unaff_RBP;
    cVar4 = cVar4 + -1;
  } while ('\0' < cVar4);
  pcVar2 = (char *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x921004b + unaff_RSI * 2);
  *pcVar2 = *pcVar2 + (char)((iVar5 + -0x3a8e5d00) - (uint)CARRY1((byte)uVar3,(byte)param_1) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

