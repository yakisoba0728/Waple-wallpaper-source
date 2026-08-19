// Function: FUN_1404b91ec
// Addr: 1404b91ec
// Size: 1 bytes


void FUN_1404b91ec(char *param_1,char *param_2)

{
  longlong unaff_RBX;
  char unaff_SPL;
  longlong unaff_RDI;
  
  param_2[(longlong)param_1] = param_2[(longlong)param_1] + (char)((ulonglong)param_2 >> 8);
  *(undefined1 *)(unaff_RDI + unaff_RBX) = *(undefined1 *)(unaff_RDI + unaff_RBX);
  *param_1 = *param_1 + unaff_SPL;
  *param_2 = *param_2 + (char)((ulonglong)param_1 >> 8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

