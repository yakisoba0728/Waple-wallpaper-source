// Function: FUN_1404cf100
// Addr: 1404cf100
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cf100(char *param_1,undefined8 param_2,char param_3)

{
  char *pcVar1;
  int in_EAX;
  char *pcVar2;
  char unaff_BL;
  undefined7 unaff_00000019;
  char unaff_R12B;
  
  pcVar2 = (char *)(ulonglong)(in_EAX + 0x70000a64U);
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x180036a8);
  *pcVar1 = *pcVar1 + unaff_BL;
  LOCK();
  *param_1 = *param_1 + unaff_R12B;
  UNLOCK();
  *pcVar2 = *pcVar2 + (char)(in_EAX + 0x70000a64U);
  pcVar2[-0x58] = pcVar2[-0x58] + ((byte)((ulonglong)param_2 >> 8) | (byte)((uint)in_EAX >> 8));
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x180036a8);
  *pcVar1 = *pcVar1 + unaff_BL;
  LOCK();
  *param_1 = *param_1 + param_3;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

