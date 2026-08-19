// Function: FUN_1404bf238
// Addr: 1404bf238
// Size: 1 bytes


void FUN_1404bf238(char *param_1,char *param_2)

{
  uint7 uVar1;
  int in_EAX;
  char *pcVar2;
  char unaff_SPL;
  
  uVar1 = (uint7)(uint3)((uint)(in_EAX + -0x4ffff7cc) >> 8);
  pcVar2 = (char *)CONCAT71(uVar1,0x26);
  pcVar2[0x15] = pcVar2[0x15] + (char)param_2;
  *param_1 = *param_1 + unaff_SPL;
  *pcVar2 = *pcVar2 + '&';
  pcVar2[-0x2fffd950] = pcVar2[-0x2fffd950] + (char)((ulonglong)param_2 >> 8);
  pcVar2 = (char *)CONCAT71(uVar1,0x26);
  pcVar2[0x15] = pcVar2[0x15] + (char)param_2;
  *param_1 = *param_1 + unaff_SPL;
  *param_2 = *param_2 + (char)param_1;
  *pcVar2 = *pcVar2 + '&';
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

