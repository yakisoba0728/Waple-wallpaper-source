// Function: FUN_1404c55a0
// Addr: 1404c55a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c55a0(undefined8 param_1,byte param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte in_AL;
  char cVar4;
  undefined7 in_register_00000001;
  byte unaff_BL;
  longlong unaff_RSI;
  byte in_CF;
  bool bVar5;
  byte unaff_retaddr;
  byte bVar3;
  
  bVar5 = CARRY1(in_AL,in_AL) || CARRY1(in_AL * '\x02',in_CF);
  cVar4 = in_AL * '\x02' + in_CF;
  pbVar1 = (byte *)(CONCAT71(in_register_00000001,cVar4) + 1);
  bVar2 = *pbVar1;
  bVar3 = *pbVar1;
  *pbVar1 = bVar3 + param_2 + bVar5;
  cVar4 = (cVar4 + -0xc) - (CARRY1(bVar2,param_2) || CARRY1(bVar3 + param_2,bVar5));
  *(char *)CONCAT71(in_register_00000001,cVar4) =
       *(char *)CONCAT71(in_register_00000001,cVar4) + cVar4 + CARRY1(unaff_retaddr,unaff_BL);
  TaskRegister(*(undefined2 *)(&stack0x00000000 + unaff_RSI));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

