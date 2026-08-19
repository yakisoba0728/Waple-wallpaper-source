// Function: FUN_1404a9fc0
// Addr: 1404a9fc0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9fc0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  uint in_EAX;
  uint uVar5;
  undefined4 in_register_00000004;
  char cVar7;
  char unaff_BL;
  longlong unaff_RBP;
  undefined3 uVar6;
  
  cVar7 = (char)((ulonglong)param_2 >> 8);
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  cVar3 = *(char *)CONCAT44(in_register_00000004,in_EAX);
  cVar4 = (char)in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + cVar4;
  if (*(char *)CONCAT44(in_register_00000004,in_EAX) == '\0' ||
      SCARRY1(cVar3,cVar4) != *(char *)CONCAT44(in_register_00000004,in_EAX) < '\0') {
    uVar6 = (undefined3)(in_EAX >> 8);
    uVar5 = CONCAT31(uVar6,cVar4 + unaff_BL);
    *(uint *)CONCAT44(in_register_00000004,uVar5) =
         *(uint *)CONCAT44(in_register_00000004,uVar5) & uVar5;
    in_EAX = CONCAT31(uVar6,cVar4 + unaff_BL);
  }
  *(char *)(unaff_RBP + param_2) = *(char *)(unaff_RBP + param_2) + cVar7;
  (&stack0x00000000)[param_2] = (&stack0x00000000)[param_2] + cVar7;
  pcVar2 = (char *)(CONCAT44(in_register_00000004,in_EAX) + -0x27fff281);
  *pcVar2 = *pcVar2 + (char)param_2;
  piVar1 = (int *)(CONCAT44(in_register_00000004,in_EAX) + 0xd);
  *piVar1 = *piVar1 + in_EAX;
  pcVar2 = (char *)(CONCAT44(in_register_00000004,in_EAX) + -0x18);
  *pcVar2 = *pcVar2 + (char)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

