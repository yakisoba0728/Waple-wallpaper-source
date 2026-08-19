// Function: FUN_1404ae3e8
// Addr: 1404ae3e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae3e8(longlong param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 in_EAX;
  char *pcVar3;
  uint uVar4;
  char cVar5;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  char *unaff_RDI;
  
  cVar2 = (char)((uint)in_EAX >> 8) * '\x02';
  pcVar3 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + param_1);
  *pcVar3 = *pcVar3 + cVar2;
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + (char)((ulonglong)param_2 >> 8);
  bVar1 = *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *unaff_RDI = *unaff_RDI + (char)((ulonglong)param_1 >> 8);
  uVar4 = (uint)CONCAT71((int7)((ulonglong)param_2 >> 8),(byte)param_2 ^ bVar1) ^
          *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  param_1 = param_1 + -1;
  if (param_1 == 0) {
    cRam0000000000000000 = cRam0000000000000000 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar3 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + param_1);
  *pcVar3 = *pcVar3 + (char)uVar4;
  cVar5 = (char)(uVar4 >> 8);
  *(char *)((ulonglong)uVar4 + param_1) = *(char *)((ulonglong)uVar4 + param_1) + cVar5;
  pcVar3 = (char *)CONCAT71((int7)((ulonglong)param_1 >> 8),(char)param_1 + cVar5);
  unaff_RDI[unaff_RSI * 2 + 0x4a] = unaff_RDI[unaff_RSI * 2 + 0x4a] + unaff_BH;
  *pcVar3 = *pcVar3 + cVar2;
  (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

