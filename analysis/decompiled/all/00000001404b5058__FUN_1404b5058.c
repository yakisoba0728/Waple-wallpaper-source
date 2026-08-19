// Function: FUN_1404b5058
// Addr: 1404b5058
// Size: 1 bytes


void FUN_1404b5058(char *param_1,int *param_2)

{
  byte in_AL;
  char in_AH;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RDI;
  
  *(byte *)((longlong)param_2 + 0x1a) = *(byte *)((longlong)param_2 + 0x1a) ^ in_AL;
  *unaff_RDI = *unaff_RDI + unaff_BH;
  unaff_RDI[0x4b] = unaff_RDI[0x4b] & (byte)param_1;
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
       (char)((uint)((int)param_1 - *param_2) >> 8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

