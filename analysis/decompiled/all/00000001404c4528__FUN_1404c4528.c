// Function: FUN_1404c4528
// Addr: 1404c4528
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4528(char *param_1,char *param_2)

{
  char *pcVar1;
  int *piVar2;
  byte *pbVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  undefined4 in_EAX;
  undefined3 uVar8;
  undefined4 uVar7;
  undefined4 in_register_00000004;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  bVar5 = (byte)in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar5;
  bVar6 = *(byte *)CONCAT44(in_register_00000004,in_EAX);
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar5;
  piVar2 = (int *)(unaff_RSI + CONCAT44(in_register_00000004,in_EAX));
  *piVar2 = *piVar2 + (int)param_2 + (uint)CARRY1(bVar6,bVar5);
  uVar8 = (undefined3)((uint)in_EAX >> 8);
  bVar6 = bVar5 + 0x34 | *(byte *)CONCAT44(in_register_00000004,CONCAT31(uVar8,bVar5 + 0x34));
  cVar4 = bVar6 + 0x72;
  uVar7 = CONCAT31(uVar8,cVar4);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,uVar7) + 0x60);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8) + (0x8d < bVar6);
  *param_2 = *param_2 + cVar4;
  *(char *)CONCAT44(in_register_00000004,uVar7) =
       *(char *)CONCAT44(in_register_00000004,uVar7) + cVar4;
  pcVar1 = (char *)(unaff_RDI + -0x2f7effd4 + (longlong)param_1 * 8);
  *pcVar1 = *pcVar1 + '+';
  uVar7 = CONCAT31(uVar8,cVar4);
  *(char *)CONCAT44(in_register_00000004,uVar7) =
       *(char *)CONCAT44(in_register_00000004,uVar7) + cVar4;
  param_1[-0x52ffd330] = param_1[-0x52ffd330] + (char)param_1;
  pbVar3 = (byte *)(CONCAT44(in_register_00000004,uVar7) + CONCAT44(in_register_00000004,uVar7));
  *pbVar3 = *pbVar3 >> 1;
  *(char *)CONCAT44(in_register_00000004,uVar7) =
       *(char *)CONCAT44(in_register_00000004,uVar7) + cVar4;
  *param_1 = *param_1 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

