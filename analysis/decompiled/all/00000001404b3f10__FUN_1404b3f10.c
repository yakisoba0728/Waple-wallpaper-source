// Function: FUN_1404b3f10
// Addr: 1404b3f10
// Size: 1 bytes


void FUN_1404b3f10(char *param_1)

{
  int *in_RAX;
  undefined8 *unaff_RSI;
  int *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + (int)param_1;
  InterruptDescriptorTableRegister(*unaff_RSI);
  *param_1 = *param_1 + (char)((uint)((int)in_RAX + *in_RAX) >> 8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

