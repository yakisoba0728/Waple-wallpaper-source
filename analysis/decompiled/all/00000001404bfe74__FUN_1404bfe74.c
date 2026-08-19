// Function: FUN_1404bfe74
// Addr: 1404bfe74
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bfe74(undefined8 param_1,byte param_2,undefined8 param_3,byte *param_4)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  undefined4 in_EAX;
  undefined3 uVar7;
  undefined4 uVar6;
  undefined4 in_register_00000004;
  byte unaff_BH;
  byte unaff_SPL;
  longlong unaff_RBP;
  int iVar5;
  
  bVar3 = *param_4;
  *param_4 = *param_4 + unaff_SPL;
  uVar7 = (undefined3)((uint)in_EAX >> 8);
  cVar4 = (char)in_EAX + '\x04' + CARRY1(bVar3,unaff_SPL);
  iVar5 = CONCAT31(uVar7,cVar4);
  pbVar2 = (byte *)(CONCAT44(in_register_00000004,iVar5) + unaff_RBP * 2);
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 + param_2;
  *(uint *)CONCAT44(in_register_00000004,iVar5) =
       *(int *)CONCAT44(in_register_00000004,iVar5) + iVar5 + (uint)CARRY1(bVar3,param_2);
  cVar4 = cVar4 + 'T';
  cVar4 = cVar4 - *(char *)CONCAT44(in_register_00000004,CONCAT31(uVar7,cVar4));
  uVar6 = CONCAT31(uVar7,cVar4);
  if (CONCAT62((int6)((ulonglong)param_1 >> 0x10),
               CONCAT11((byte)((ulonglong)param_1 >> 8) & unaff_BH,(char)param_1)) == 1 ||
      cVar4 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT44(in_register_00000004,uVar6) =
       *(char *)CONCAT44(in_register_00000004,uVar6) + cVar4;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,uVar6) + -0x21);
  *pcVar1 = *pcVar1 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

