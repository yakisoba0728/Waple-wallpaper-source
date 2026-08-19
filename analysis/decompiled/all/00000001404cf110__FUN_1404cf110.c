// Function: FUN_1404cf110
// Addr: 1404cf110
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cf110(char *param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  undefined8 in_RAX;
  char cVar3;
  char unaff_BL;
  undefined7 unaff_00000019;
  char unaff_R12B;
  char in_CF;
  char *pcVar2;
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  cVar1 = ((char)in_RAX - cVar3) - in_CF;
  pcVar2 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
  *param_1 = *param_1 + unaff_R12B;
  *pcVar2 = *pcVar2 + cVar1;
  pcVar2[-0x58] = pcVar2[-0x58] + cVar3;
  pcVar2 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x180036a8);
  *pcVar2 = *pcVar2 + unaff_BL;
  LOCK();
  *param_1 = *param_1 + param_3;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

