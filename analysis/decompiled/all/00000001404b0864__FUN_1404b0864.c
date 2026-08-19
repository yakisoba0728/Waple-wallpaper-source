// Function: FUN_1404b0864
// Addr: 1404b0864
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0864(char *param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int in_EAX;
  longlong unaff_RBP;
  char *unaff_RSI;
  byte in_CF;
  
  pbVar1 = (byte *)(unaff_RBP + -0x7ae7ffeb);
  bVar2 = *pbVar1;
  bVar3 = *pbVar1 + (byte)in_EAX;
  *pbVar1 = bVar3 + in_CF;
  cVar4 = (char)(in_EAX + 0x4b059400 + (uint)(CARRY1(bVar2,(byte)in_EAX) || CARRY1(bVar3,in_CF)) >>
                8);
  *param_1 = *param_1 + cVar4;
  *param_2 = *param_2 + cVar4;
  in(4);
  *unaff_RSI = *unaff_RSI + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

