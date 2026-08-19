// Function: FUN_1404ccacc
// Addr: 1404ccacc
// Size: 1 bytes


void FUN_1404ccacc(char *param_1,char param_2)

{
  short in_AX;
  char *pcVar1;
  char unaff_R12B;
  
  pcVar1 = (char *)(ulonglong)(uint)(int)in_AX;
  *param_1 = *param_1 + unaff_R12B;
  *pcVar1 = *pcVar1 + param_2;
  *pcVar1 = *pcVar1 + (char)in_AX;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

