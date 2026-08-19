// Function: FUN_1404a7d34
// Addr: 1404a7d34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7d34(char *param_1,char *param_2)

{
  char cVar1;
  byte bVar4;
  int in_EAX;
  uint *puVar2;
  char *pcVar3;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  longlong unaff_RDI;
  uint7 uVar5;
  
  uVar5 = (uint7)(uint3)((uint)(in_EAX + 0x44000668) >> 8);
  puVar2 = (uint *)CONCAT71(uVar5,10);
  pcVar3 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x3c000ab0);
  cVar1 = *pcVar3;
  bVar4 = (byte)((uint)(in_EAX + 0x44000668) >> 8);
  *pcVar3 = *pcVar3 + bVar4;
  if (SCARRY1(cVar1,bVar4) == *pcVar3 < '\0') {
    *param_1 = *param_1 + bVar4;
    *(char *)puVar2 = (char)*puVar2 + '\n';
    pcVar3 = (char *)((longlong)puVar2 + CONCAT44(unaff_00000034,unaff_ESI) * 4 + 10);
    *pcVar3 = *pcVar3 + '\n';
    pcVar3 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x3c000ab0);
    cVar1 = *pcVar3;
    *pcVar3 = *pcVar3 + bVar4;
    if (SCARRY1(cVar1,bVar4) == *pcVar3 < '\0') {
      *param_1 = *param_1 + bVar4;
      *(char *)puVar2 = (char)*puVar2 + '\n';
      *(char *)((longlong)puVar2 + -0x51) = *(char *)((longlong)puVar2 + -0x51) + bVar4;
      pcVar3 = (char *)CONCAT71(uVar5,10);
      (&stack0x00000000)[unaff_RDI * 2] =
           (&stack0x00000000)[unaff_RDI * 2] + (char)((ulonglong)param_1 >> 8);
      *param_1 = *param_1;
      *param_2 = *param_2 + (char)param_1;
      *pcVar3 = *pcVar3 + '\n';
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  else {
    iRam00000001503a8e93 = iRam00000001503a8e93 + (int)param_2;
    param_1 = param_1 + -1;
    if (param_1 != (char *)0x0 && iRam00000001503a8e93 != 0) {
      pcVar3 = (char *)(ulonglong)((uint)puVar2 | *puVar2);
      *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
           *(char *)CONCAT44(unaff_00000034,unaff_ESI) - (char)((ulonglong)param_2 >> 8);
      *pcVar3 = *pcVar3 + (char)((ulonglong)param_1 >> 8);
      *(int *)CONCAT44(unaff_00000034,unaff_ESI) =
           *(int *)CONCAT44(unaff_00000034,unaff_ESI) + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) =
         *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) >> 1 |
         *(char *)CONCAT44(unaff_0000001c,unaff_EBX) << 7;
    *param_1 = *param_1;
    *(byte *)((longlong)puVar2 + 7) = *(byte *)((longlong)puVar2 + 7) | bVar4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

