// Function: FUN_1404a7eb8
// Addr: 1404a7eb8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7eb8(uint param_1,uint param_2)

{
  char *pcVar1;
  uint *puVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 uVar5;
  char cVar6;
  uint in_EAX;
  undefined4 in_register_00000004;
  undefined8 uVar7;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  undefined4 uVar8;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  pcVar4 = (code *)swi(10);
  uVar7 = (*pcVar4)();
  uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0x33);
  *pcVar1 = *pcVar1 + unaff_BL;
  cVar6 = cRam1700031701004a7d;
  uVar5 = CONCAT31((int3)((ulonglong)uVar7 >> 8),cRam1700031701004a7d);
  puVar2 = (uint *)(CONCAT44(uVar8,uVar5) + CONCAT44(uVar8,uVar5));
  uVar3 = *puVar2;
  *puVar2 = *puVar2 + param_2;
  *(char *)CONCAT44(uVar8,uVar5) =
       *(char *)CONCAT44(uVar8,uVar5) + (char)(param_2 >> 8) + CARRY4(uVar3,param_2);
  *(char *)CONCAT44(uVar8,uVar5) = *(char *)CONCAT44(uVar8,uVar5) + cVar6;
  *(uint *)(unaff_RBP + 0xe) = *(uint *)(unaff_RBP + 0xe) & param_1;
  *(char *)(unaff_RBP + -0xc) = *(char *)(unaff_RBP + -0xc) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

