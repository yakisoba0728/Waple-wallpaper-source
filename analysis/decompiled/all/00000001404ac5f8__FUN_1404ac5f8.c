// Function: FUN_1404ac5f8
// Addr: 1404ac5f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac5f8(undefined8 param_1,char *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined4 in_EAX;
  undefined3 uVar7;
  undefined4 in_register_00000004;
  byte bVar8;
  char unaff_BL;
  char unaff_BH;
  byte *unaff_RSI;
  int iVar6;
  
  bVar8 = (byte)((ulonglong)param_2 >> 8);
  uVar7 = (undefined3)((uint)in_EAX >> 8);
  uVar5 = in(10);
  iVar6 = CONCAT31(uVar7,uVar5);
  *param_2 = *param_2 + unaff_BH;
  if (*param_2 != '\0') {
    bVar3 = *unaff_RSI;
    *unaff_RSI = *unaff_RSI + bVar8;
    *(uint *)CONCAT44(in_register_00000004,iVar6) =
         *(int *)CONCAT44(in_register_00000004,iVar6) + iVar6 + (uint)CARRY1(bVar3,bVar8);
    pbVar1 = (byte *)(CONCAT44(in_register_00000004,iVar6) + 4);
    *pbVar1 = *pbVar1 & (byte)((ulonglong)param_1 >> 8);
    *param_2 = *param_2 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = CONCAT31(uVar7,uVar5);
  pcVar2 = (char *)((CONCAT44(in_register_00000004,uVar4) ^ 0x10) - 0x3cffefc7);
  *pcVar2 = *pcVar2 + bVar8;
  *(char *)(CONCAT44(in_register_00000004,uVar4) ^ 0x10) =
       *(char *)(CONCAT44(in_register_00000004,uVar4) ^ 0x10) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

