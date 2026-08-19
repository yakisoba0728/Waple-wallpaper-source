// Function: FUN_1404b3b0c
// Addr: 1404b3b0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3b0c(uint param_1,byte param_2)

{
  byte *pbVar1;
  byte bVar2;
  char in_AL;
  char cVar3;
  undefined7 in_register_00000001;
  byte unaff_BH;
  byte *unaff_RSI;
  
  *(uint *)CONCAT71(in_register_00000001,in_AL) =
       *(uint *)CONCAT71(in_register_00000001,in_AL) & param_1;
  cVar3 = in_AL + *(char *)CONCAT71(in_register_00000001,in_AL);
  pbVar1 = (byte *)(CONCAT71(in_register_00000001,cVar3) + 9);
  *pbVar1 = *pbVar1 | unaff_BH;
  bVar2 = *unaff_RSI;
  *unaff_RSI = *unaff_RSI + param_2;
  *(char *)CONCAT71(in_register_00000001,cVar3) =
       (*(char *)CONCAT71(in_register_00000001,cVar3) - cVar3) - CARRY1(bVar2,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

