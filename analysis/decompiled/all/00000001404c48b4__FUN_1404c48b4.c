// Function: FUN_1404c48b4
// Addr: 1404c48b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c48b4(undefined8 param_1,char *param_2)

{
  char cVar1;
  uint in_EAX;
  char cVar2;
  undefined6 uVar3;
  byte in_CF;
  
  uVar3 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar2 = (char)param_2;
  cVar1 = *(char *)(ulonglong)(in_EAX + 0x1e01132 + (uint)in_CF);
  *param_2 = *param_2 + cVar2;
  cVar1 = (char)((ulonglong)param_2 >> 8) +
          param_2[CONCAT71((int7)((ulonglong)param_1 >> 8),
                           (char)param_1 + cVar1 +
                           (0xfe1feecd < in_EAX || CARRY4(in_EAX + 0x1e01132,(uint)in_CF)))];
  *(char *)CONCAT62(uVar3,CONCAT11(cVar1,cVar2)) =
       *(char *)CONCAT62(uVar3,CONCAT11(cVar1,cVar2)) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

