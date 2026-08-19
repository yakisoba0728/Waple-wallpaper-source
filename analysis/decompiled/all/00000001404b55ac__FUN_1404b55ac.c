// Function: FUN_1404b55ac
// Addr: 1404b55ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b55ac(int *param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  undefined7 in_register_00000001;
  longlong unaff_RBX;
  longlong unaff_RSI;
  char *unaff_RDI;
  byte in_CF;
  
  *(int *)(unaff_RSI + param_2) = *(int *)(unaff_RSI + param_2) + 0x5b + (uint)in_CF;
  cVar3 = in(0x10);
  pbVar1 = (byte *)(unaff_RBX + 0x74);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + (byte)param_2;
  *(char *)CONCAT71(in_register_00000001,cVar3) =
       (*(char *)CONCAT71(in_register_00000001,cVar3) - cVar3) - CARRY1(bVar2,(byte)param_2);
  *unaff_RDI = *unaff_RDI + (char)param_1;
  *param_1 = *param_1 + (int)param_2;
  *(char *)CONCAT71(in_register_00000001,cVar3) =
       *(char *)CONCAT71(in_register_00000001,cVar3) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

