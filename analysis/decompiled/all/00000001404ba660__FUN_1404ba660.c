// Function: FUN_1404ba660
// Addr: 1404ba660
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba660(undefined8 param_1,char *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  int in_EAX;
  char *pcVar2;
  char unaff_BH;
  
  cVar1 = (char)(in_EAX + -0x44fff61c);
  out(0x20,cVar1);
  cVar1 = cVar1 * '\x02';
  pcVar2 = (char *)(ulonglong)CONCAT31((int3)((uint)(in_EAX + -0x44fff61c) >> 8),cVar1);
  out(0x20,cVar1);
  pcVar2[-0x5b] = pcVar2[-0x5b] + unaff_BH;
  *param_4 = *param_4;
  *param_2 = *param_2 + cVar1;
  *pcVar2 = *pcVar2 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

