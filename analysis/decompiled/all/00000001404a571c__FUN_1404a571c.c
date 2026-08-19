// Function: FUN_1404a571c
// Addr: 1404a571c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a571c(char *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  undefined4 in_EAX;
  undefined3 uVar7;
  undefined4 in_register_00000004;
  uint *unaff_RBX;
  byte *unaff_RSI;
  undefined8 uStackX_10;
  undefined1 auStackX_18 [16];
  undefined4 uVar5;
  uint uVar6;
  
  uVar7 = (undefined3)((uint)in_EAX >> 8);
  bVar3 = (char)in_EAX + 0xaa;
  uVar5 = CONCAT31(uVar7,bVar3);
  *param_1 = *param_1;
  *(byte *)CONCAT44(in_register_00000004,uVar5) =
       *(char *)CONCAT44(in_register_00000004,uVar5) + bVar3;
  *(char *)CONCAT44(in_register_00000004,uVar5) =
       *(char *)CONCAT44(in_register_00000004,uVar5) + (char)((ulonglong)param_2 >> 8);
  *(byte *)CONCAT44(in_register_00000004,uVar5) =
       *(byte *)CONCAT44(in_register_00000004,uVar5) | bVar3;
  *(byte *)CONCAT44(in_register_00000004,uVar5) =
       *(byte *)CONCAT44(in_register_00000004,uVar5) | bVar3;
  cVar4 = (char)in_EAX + 'T';
  uVar6 = CONCAT31(uVar7,cVar4);
  *param_1 = *param_1 + cVar4;
  *unaff_RBX = *unaff_RBX | uVar6;
  *param_1 = *param_1 + (char)param_1;
  piVar1 = (int *)(CONCAT44(in_register_00000004,uVar6) + CONCAT44(in_register_00000004,uVar6));
  *piVar1 = *piVar1 + (int)auStackX_18;
  cVar2 = *(char *)CONCAT44(in_register_00000004,uVar6);
  *(char *)CONCAT44(in_register_00000004,uVar6) =
       *(char *)CONCAT44(in_register_00000004,uVar6) + cVar4;
  *(uint *)CONCAT44(in_register_00000004,uVar6) =
       *(uint *)CONCAT44(in_register_00000004,uVar6) & (uint)param_1;
  bVar3 = cVar4 + *(char *)CONCAT44(in_register_00000004,uVar6);
  uVar5 = CONCAT31(uVar7,bVar3);
  *unaff_RSI = *unaff_RSI | (char)((ulonglong)uStackX_10 >> 8) + cVar2;
  param_1[CONCAT44(in_register_00000004,uVar5)] = param_1[CONCAT44(in_register_00000004,uVar5)];
  *(byte *)CONCAT44(in_register_00000004,uVar5) =
       *(byte *)CONCAT44(in_register_00000004,uVar5) | bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

