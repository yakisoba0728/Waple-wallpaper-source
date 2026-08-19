// Function: FUN_1404c836c
// Addr: 1404c836c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c836c(char *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  char in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RBP;
  char unaff_R12B;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  if (*(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
      == '\0') {
    *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) ^ CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
    uVar2 = rdtsc();
    uVar3 = (undefined4)uVar2;
    pcVar1 = (char *)(CONCAT44(in_register_00000004,uVar3) + -0x7e);
    *pcVar1 = *pcVar1 + (char)((ulonglong)uVar2 >> 0x28);
    *param_1 = *param_1 + unaff_R12B;
    *(char *)CONCAT44(in_register_00000004,uVar3) =
         *(char *)CONCAT44(in_register_00000004,uVar3) + (char)uVar2;
    *(char *)CONCAT44(in_register_00000004,uVar3) =
         *(char *)CONCAT44(in_register_00000004,uVar3) + (char)((ulonglong)uVar2 >> 8);
  }
  uVar2 = rdtsc();
  *(char *)(unaff_RBP + 0xf) = *(char *)(unaff_RBP + 0xf) + (char)((ulonglong)uVar2 >> 0x28);
  uVar4 = (uint)uVar2;
  *(uint *)CONCAT44(in_register_00000004,uVar4) =
       *(uint *)CONCAT44(in_register_00000004,uVar4) ^ uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

