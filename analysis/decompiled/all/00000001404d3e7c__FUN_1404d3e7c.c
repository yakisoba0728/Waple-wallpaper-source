// Function: FUN_1404d3e7c
// Addr: 1404d3e7c
// Size: 1 bytes


void FUN_1404d3e7c(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  undefined1 in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  byte *unaff_RDI;
  
  pcVar1 = (char *)(unaff_RBP +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
  *pcVar1 = *pcVar1 + (char)param_2;
  *param_2 = *param_2 << 1;
  *(int *)CONCAT71(unaff_00000019,unaff_BL) =
       *(int *)CONCAT71(unaff_00000019,unaff_BL) + (int)param_2;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

