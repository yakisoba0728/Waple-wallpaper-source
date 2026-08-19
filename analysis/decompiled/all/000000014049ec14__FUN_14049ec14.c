// Function: FUN_14049ec14
// Addr: 14049ec14
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049ec14(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  char cVar2;
  undefined4 in_EAX;
  undefined3 uVar5;
  undefined4 uVar4;
  undefined4 in_register_00000004;
  byte bVar6;
  byte bVar7;
  char cVar8;
  undefined6 uVar9;
  char unaff_SPL;
  longlong unaff_RDI;
  char in_CF;
  uint uVar3;
  
  uVar9 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar7 = (byte)((ulonglong)param_2 >> 8);
  bVar6 = (byte)((ulonglong)param_1 >> 8);
  out((short)param_2,(char)in_EAX);
  uVar5 = (undefined3)((uint)in_EAX >> 8);
  cVar2 = ((char)in_EAX + -1) - in_CF;
  uVar3 = CONCAT31(uVar5,cVar2);
  *(char *)(unaff_RDI + 0x1d) = *(char *)(unaff_RDI + 0x1d) + cVar2;
  uVar1 = *(uint *)CONCAT44(in_register_00000004,uVar3);
  *(uint *)CONCAT44(in_register_00000004,uVar3) =
       *(int *)CONCAT44(in_register_00000004,uVar3) + uVar3;
  cVar2 = (cVar2 + '\x15') - CARRY4(uVar1,uVar3);
  *param_4 = *param_4 + unaff_SPL;
  *(char *)CONCAT44(in_register_00000004,CONCAT31(uVar5,cVar2)) =
       *(char *)CONCAT44(in_register_00000004,CONCAT31(uVar5,cVar2)) + cVar2;
  cVar8 = bVar7 + bVar6;
  cVar2 = (cVar2 + -1) - CARRY1(bVar7,bVar6);
  uVar3 = CONCAT31(uVar5,cVar2);
  *(char *)(unaff_RDI + 0x1d) = *(char *)(unaff_RDI + 0x1d) + cVar2;
  uVar1 = *(uint *)CONCAT44(in_register_00000004,uVar3);
  *(uint *)CONCAT44(in_register_00000004,uVar3) =
       *(int *)CONCAT44(in_register_00000004,uVar3) + uVar3;
  cVar2 = (cVar2 + '\x15') - CARRY4(uVar1,uVar3);
  uVar4 = CONCAT31(uVar5,cVar2);
  *param_4 = *param_4 + unaff_SPL;
  *(char *)CONCAT62(uVar9,CONCAT11(cVar8,(char)param_2)) =
       *(char *)CONCAT62(uVar9,CONCAT11(cVar8,(char)param_2)) + (char)param_1;
  *(char *)CONCAT44(in_register_00000004,uVar4) =
       *(char *)CONCAT44(in_register_00000004,uVar4) + cVar2;
  cVar2 = in(4);
  *(char *)CONCAT44(in_register_00000004,CONCAT31(uVar5,cVar2)) =
       *(char *)CONCAT44(in_register_00000004,CONCAT31(uVar5,cVar2)) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

