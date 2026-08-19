// Function: FUN_1404a2994
// Addr: 1404a2994
// Size: 1 bytes


void FUN_1404a2994(char *param_1,char param_2,undefined8 param_3,char *param_4)

{
  char cVar2;
  undefined8 in_RAX;
  char *pcVar1;
  char *unaff_RBX;
  char unaff_SPL;
  
  pcVar1 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cRam7c000532c3000532);
  *param_4 = *param_4 + unaff_SPL;
  *pcVar1 = *pcVar1 + cRam7c000532c3000532;
  cVar2 = (char)((ulonglong)in_RAX >> 8);
  pcVar1[-0x3cffface] = pcVar1[-0x3cffface] + cVar2;
  *param_1 = *param_1 + cVar2;
  *unaff_RBX = *unaff_RBX + param_2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

