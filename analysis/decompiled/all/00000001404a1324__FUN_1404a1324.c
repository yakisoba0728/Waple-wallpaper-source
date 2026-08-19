// Function: FUN_1404a1324
// Addr: 1404a1324
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1324(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  undefined4 in_EAX;
  uint uVar7;
  undefined4 in_register_00000004;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  char in_CF;
  undefined3 uVar8;
  
  bVar6 = bRam340003bc110003bb;
  uVar8 = (undefined3)((uint)in_EAX >> 8);
  uVar7 = CONCAT31(uVar8,bRam340003bc110003bb);
  cVar4 = *param_2;
  *(uint *)CONCAT44(in_register_00000004,uVar7) =
       *(uint *)CONCAT44(in_register_00000004,uVar7) & uVar7;
  bVar3 = *(byte *)CONCAT44(in_register_00000004,uVar7);
  *(byte *)CONCAT44(in_register_00000004,uVar7) =
       *(char *)CONCAT44(in_register_00000004,uVar7) + bVar6;
  uVar7 = CONCAT31(uVar8,bRam340003bc110003bb);
  cVar5 = *param_2;
  *(int *)CONCAT44(in_register_00000004,uVar7) =
       *(int *)CONCAT44(in_register_00000004,uVar7) + unaff_EBX;
  *(uint *)CONCAT44(in_register_00000004,uVar7) =
       *(uint *)CONCAT44(in_register_00000004,uVar7) | uVar7;
  pcVar1 = (char *)(CONCAT44(unaff_0000001c,unaff_EBX) +
                   CONCAT71((int7)((ulonglong)param_1 >> 8),
                            (char)param_1 + cVar4 + in_CF + cVar5 + CARRY1(bVar3,bVar6)) * 2);
  *pcVar1 = *pcVar1 - (char)((ulonglong)param_2 >> 8);
  *(char *)CONCAT44(in_register_00000004,uVar7) =
       *(char *)CONCAT44(in_register_00000004,uVar7) + (char)unaff_EBX;
  piVar2 = (int *)(CONCAT44(in_register_00000004,uVar7) + 0x11 +
                  CONCAT44(in_register_00000004,uVar7));
  *piVar2 = *piVar2 + uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

