// Function: FUN_1404c973c
// Addr: 1404c973c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c973c(char *param_1,undefined8 param_2,char param_3)

{
  uint uVar1;
  char cVar2;
  uint in_EAX;
  uint *unaff_RSI;
  char unaff_R12B;
  uint *puVar3;
  
  uRam00000001a4519744 = uRam00000001a4519744 & in_EAX;
  cVar2 = (char)in_EAX + (char)((in_EAX | 0x31f97600) >> 8);
  uVar1 = CONCAT31((int3)((in_EAX | 0x31f97600) >> 8),cVar2);
  puVar3 = (uint *)(ulonglong)uVar1;
  *puVar3 = *puVar3 ^ uVar1;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)unaff_RSI = (char)*unaff_RSI + (char)unaff_RSI;
  do {
    *(char *)((longlong)puVar3 + -7) =
         *(char *)((longlong)puVar3 + -7) + (char)((ulonglong)param_2 >> 8);
    *unaff_RSI = *unaff_RSI ^ (uint)unaff_RSI;
    param_1 = param_1 + -1;
  } while (param_1 != (char *)0x0 && *unaff_RSI != 0);
  *unaff_RSI = *unaff_RSI ^ (uint)unaff_RSI;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)puVar3 = (char)*puVar3 + cVar2;
  do {
    *(char *)((longlong)puVar3 + -7) = *(char *)((longlong)puVar3 + -7) + (char)param_2;
    *puVar3 = *puVar3 ^ uVar1;
  } while (*puVar3 == 0);
  *puVar3 = *puVar3 ^ uVar1;
  *param_1 = *param_1 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

