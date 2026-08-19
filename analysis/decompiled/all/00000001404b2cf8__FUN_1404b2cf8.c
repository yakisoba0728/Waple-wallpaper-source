// Function: FUN_1404b2cf8
// Addr: 1404b2cf8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  int in_EAX;
  char *pcVar2;
  char unaff_SPL;
  
  cVar1 = cRam2c080017a0800017;
  pcVar2 = (char *)(ulonglong)
                   CONCAT31((int3)((uint)(in_EAX + 0x70000a64) >> 8),cRam2c080017a0800017);
  *param_4 = *param_4 + unaff_SPL;
  *pcVar2 = *pcVar2 + cVar1;
  pcVar2[-0x60] = pcVar2[-0x60] + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

