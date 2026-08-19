// Function: FUN_1404ae124
// Addr: 1404ae124
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae124(undefined8 param_1,int param_2)

{
  char cVar1;
  int in_EAX;
  uint uVar2;
  undefined7 uVar3;
  byte in_CF;
  
  cVar1 = cRam000000014baaed9d;
  uVar3 = (undefined7)((ulonglong)param_1 >> 8);
  uVar2 = in_EAX + param_2 + (uint)in_CF;
  cRam000000014baaed9d = cRam000000014baaed9d + (char)param_1;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
  *(int *)CONCAT71(uVar3,cVar1) = *(int *)CONCAT71(uVar3,cVar1) + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

