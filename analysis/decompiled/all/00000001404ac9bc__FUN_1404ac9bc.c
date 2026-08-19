// Function: FUN_1404ac9bc
// Addr: 1404ac9bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac9bc(char *param_1,uint *param_2)

{
  byte *pbVar1;
  byte in_AL;
  byte bVar2;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  char *unaff_RSI;
  longlong unaff_RDI;
  undefined2 in_SS;
  
  *(undefined2 *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) = in_SS;
  pbVar1 = (byte *)(unaff_RDI + -0x74);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + (byte)param_2;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL +
       CARRY1(bVar2,(byte)param_2);
  bVar2 = in_AL ^ (byte)param_1;
  *param_1 = *param_1;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) + bVar2;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) + in_AH;
  *(undefined2 *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) = in_SS;
  *unaff_RSI = *unaff_RSI + unaff_BH;
  *(undefined2 *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) = in_SS;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) + in_AH;
  *param_2 = *param_2 & (uint)param_1;
  *param_1 = *param_1 + in_AH;
  *(int *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       *(int *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
       CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *(char *)param_2 = (char)*param_2 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

