// Function: FUN_1404a5238
// Addr: 1404a5238
// Size: 1 bytes


void FUN_1404a5238(char *param_1)

{
  uint uVar1;
  char cVar3;
  undefined8 in_RAX;
  char unaff_BL;
  uint unaff_ESP;
  uint unaff_ESI;
  char *pcVar2;
  
  uVar1 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + -0x1c) + 0x7740500;
  pcVar2 = (char *)(ulonglong)uVar1;
  pcVar2[-0x6fff809] = pcVar2[-0x6fff809] + unaff_BL;
  cVar3 = (char)(uVar1 >> 8);
  *param_1 = *param_1 + cVar3;
  *pcVar2 = *pcVar2 + (char)uVar1;
  pcVar2[-0x6fff809] = pcVar2[-0x6fff809] + unaff_BL;
  *param_1 = *param_1 + cVar3;
  *(char *)(ulonglong)(unaff_ESI & unaff_ESP) =
       *(char *)(ulonglong)(unaff_ESI & unaff_ESP) + (char)param_1;
  *pcVar2 = *pcVar2 + (char)uVar1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

