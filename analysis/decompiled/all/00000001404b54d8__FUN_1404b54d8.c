// Function: FUN_1404b54d8
// Addr: 1404b54d8
// Size: 1 bytes


void FUN_1404b54d8(byte *param_1,longlong param_2)

{
  undefined8 in_RAX;
  int *piVar1;
  undefined2 *unaff_RSI;
  longlong unaff_RDI;
  
  piVar1 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX | *param_1);
  *piVar1 = *piVar1 + (int)piVar1;
  *(uint *)((longlong)piVar1 + param_2) = *(uint *)((longlong)piVar1 + param_2) & (uint)param_2;
  in(0xd);
  *(char *)(unaff_RDI + 100) = *(char *)(unaff_RDI + 100) + (char)param_1;
  LocalDescriptorTableRegister(*unaff_RSI);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

