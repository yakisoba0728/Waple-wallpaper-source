// Function: FUN_1404b3580
// Addr: 1404b3580
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3580(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  char cVar5;
  char cVar6;
  char *pcVar7;
  char cVar8;
  char unaff_BL;
  longlong unaff_RSI;
  longlong unaff_RDI;
  uint *puVar4;
  
  cVar8 = (char)((ulonglong)param_2 >> 8);
  in(0x17);
  cVar5 = (char)param_1 + unaff_BL;
  uVar3 = in(0x17);
  bVar2 = (char)uVar3 + cVar5;
  uVar1 = CONCAT31((int3)((uint)uVar3 >> 8),bVar2);
  puVar4 = (uint *)(ulonglong)uVar1;
  pcVar7 = (char *)(CONCAT71((int7)((ulonglong)param_1 >> 8),cVar5) + -1);
  cVar5 = (char)((uint)uVar3 >> 8);
  if (pcVar7 == (char *)0x0 || bVar2 == 0) {
    *pcVar7 = *pcVar7 + cVar5;
    *(byte *)puVar4 = (byte)*puVar4 + bVar2;
    in(0x17);
    cVar6 = (char)pcVar7 + unaff_BL;
    uVar3 = in(0x17);
    cVar5 = (char)uVar3 + cVar6;
    puVar4 = (uint *)(ulonglong)CONCAT31((int3)((uint)uVar3 >> 8),cVar5);
    pcVar7 = (char *)(CONCAT71((int7)((ulonglong)pcVar7 >> 8),cVar6) + -1);
    if (pcVar7 == (char *)0x0 || cVar5 == '\0') {
      *pcVar7 = *pcVar7 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *puVar4 = *puVar4 & uVar1;
    *(byte *)puVar4 = (byte)*puVar4 | bVar2;
    cVar5 = cVar5 * '\x02';
    uVar1 = CONCAT22((short)((uint)uVar3 >> 0x10),CONCAT11(cVar5,bVar2));
    puVar4 = (uint *)(ulonglong)uVar1;
    *puVar4 = *puVar4 | uVar1;
    *(char *)((longlong)puVar4 + (longlong)pcVar7) =
         *(char *)((longlong)puVar4 + (longlong)pcVar7) + cVar8;
    *(char *)(unaff_RDI + (longlong)puVar4) = *(char *)(unaff_RDI + (longlong)puVar4) + cVar5;
  }
  *(char *)(unaff_RSI + (longlong)puVar4) = *(char *)(unaff_RSI + (longlong)puVar4) + cVar8;
  *(char *)((longlong)puVar4 + -0x4fffe819) =
       *(char *)((longlong)puVar4 + -0x4fffe819) + (char)param_2;
  out(0x17,(int)puVar4);
  *pcVar7 = *pcVar7 + ((char)puVar4 + (char)param_2 ^ 0x4bU);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

