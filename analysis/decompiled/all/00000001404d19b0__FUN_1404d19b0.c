// Function: FUN_1404d19b0
// Addr: 1404d19b0
// Size: 1 bytes


void FUN_1404d19b0(char param_1,undefined2 param_2,byte *param_3)

{
  byte bVar1;
  char *unaff_RBP;
  byte unaff_R13B;
  
  in(0x18);
  bVar1 = *param_3;
  *param_3 = *param_3 + unaff_R13B;
  in(param_2);
  *unaff_RBP = (*unaff_RBP - param_1) - CARRY1(bVar1,unaff_R13B);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

