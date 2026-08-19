// Function: FUN_1404b0e68
// Addr: 1404b0e68
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0e68(char param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar3;
  uint in_EAX;
  uint uVar2;
  char unaff_SPL;
  
  uVar2 = in_EAX + 0x159e7100 + (uint)((in_EAX & 0x100) != 0);
  pcVar1 = (char *)((ulonglong)uVar2 + 0xd);
  cVar3 = (char)(uVar2 >> 8);
  *pcVar1 = *pcVar1 + cVar3;
  *param_4 = *param_4 + unaff_SPL;
  pcVar1 = (char *)((ulonglong)uVar2 * 2);
  *pcVar1 = *pcVar1 + param_1;
  uVar2 = CONCAT22((short)(uVar2 >> 0x10),
                   CONCAT11((cVar3 + (char)((ulonglong)param_2 >> 8)) * '\x02',(char)uVar2)) +
          0x6d40000;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

