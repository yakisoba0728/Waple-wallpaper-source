// Function: FUN_1404ad510
// Addr: 1404ad510
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ad511) overlaps instruction at (ram,0x0001404ad510)
    */

void FUN_1404ad510(longlong param_1,undefined8 param_2)

{
  char cVar1;
  char extraout_AL;
  char in_AL;
  char extraout_AL_00;
  byte extraout_AH;
  byte in_AH;
  byte extraout_AH_00;
  undefined2 extraout_var;
  undefined2 in_register_00000002;
  undefined2 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 in_register_00000004;
  undefined4 extraout_var_02;
  char *pcVar2;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_EBP;
  byte in_CF;
  byte bVar3;
  char in_ZF;
  undefined8 uStack_8;
  
  pcVar2 = (char *)(param_1 + -1);
  if (pcVar2 == (char *)0x0 || in_ZF != '\0') {
    *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
         + CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)) + (uint)in_CF;
    bVar3 = CARRY4((uint)pcVar2,unaff_EBP);
    pcVar2 = (char *)(ulonglong)((uint)pcVar2 + unaff_EBP);
  }
  else {
    cVar1 = *(char *)CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
    pcVar2[(longlong)register0x00000020] =
         pcVar2[(longlong)register0x00000020] + (char)((ulonglong)param_2 >> 8);
    bVar3 = CARRY1(in_AL + cVar1,in_AH);
    uStack_8 = &UNK_1404ad506;
    func_0x0001294bd517();
    *(uint *)CONCAT44(extraout_var_01,CONCAT22(extraout_var,CONCAT11(extraout_AH,extraout_AL))) =
         *(int *)CONCAT44(extraout_var_01,CONCAT22(extraout_var,CONCAT11(extraout_AH,extraout_AL)))
         + CONCAT22(extraout_var,CONCAT11(extraout_AH,extraout_AL)) + (uint)bVar3;
    bVar3 = extraout_AL - 0x2c;
    *pcVar2 = *pcVar2;
    *(byte *)CONCAT44(extraout_var_01,CONCAT22(extraout_var,CONCAT11(extraout_AH,bVar3))) =
         *(char *)CONCAT44(extraout_var_01,CONCAT22(extraout_var,CONCAT11(extraout_AH,bVar3))) +
         bVar3;
    bVar3 = CARRY1(bVar3,extraout_AH);
    uStack_8 = &UNK_1404ad516;
    func_0x0001294bd527();
    in_AL = extraout_AL_00;
    in_AH = extraout_AH_00;
    in_register_00000002 = extraout_var_00;
    in_register_00000004 = extraout_var_02;
  }
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
       CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)) + (uint)bVar3;
  *pcVar2 = *pcVar2 + in_AL + -0x2c;
  if ((POPCOUNT(*pcVar2) & 1U) == 0) {
    pcVar2 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0xc);
    *pcVar2 = *pcVar2 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

