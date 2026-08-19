// Function: FUN_1404b0a08
// Addr: 1404b0a08
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0a08(longlong param_1,longlong param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  char cVar6;
  undefined8 in_RAX;
  uint *puVar5;
  char cVar8;
  char cVar9;
  byte *unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined6 uVar7;
  
  cVar9 = (char)((ulonglong)param_2 >> 8);
  cVar8 = (char)param_2;
  uVar7 = (undefined6)((ulonglong)in_RAX >> 0x10);
  bVar3 = (byte)in_RAX;
  cVar6 = (char)((ulonglong)in_RAX >> 8) * '\x02';
  puVar5 = (uint *)CONCAT62(uVar7,CONCAT11(cVar6,bVar3));
  *puVar5 = *puVar5 | (uint)puVar5;
  cVar6 = cVar6 + cVar8;
  bVar3 = bVar3 | *(byte *)CONCAT62(uVar7,CONCAT11(cVar6,bVar3));
  puVar5 = (uint *)CONCAT62(uVar7,CONCAT11(cVar6 + bVar3,bVar3));
  uVar4 = (uint)puVar5 | *puVar5;
  (&stack0x00000000)[param_1] = (&stack0x00000000)[param_1] + cVar9;
  cVar6 = (char)(uVar4 >> 8);
  *(char *)(param_1 + param_2) = *(char *)(param_1 + param_2) + cVar6;
  *(char *)((ulonglong)uVar4 + param_2) = *(char *)((ulonglong)uVar4 + param_2) + cVar8;
  *(char *)(unaff_RDI + param_1) = *(char *)(unaff_RDI + param_1) + cVar9;
  uVar2 = uRam0000000155d2ed2b;
  LOCK();
  cVar9 = (char)uRam0000000155d2ed2b;
  UNLOCK();
  uRam0000000155d2ed2b = (int)param_2;
  *unaff_RBX = *unaff_RBX | (byte)param_1;
  *(int *)(&stack0x00000000 +
          CONCAT22((short)(uVar4 >> 0x10),CONCAT11(cVar6 + cVar9,(char)uVar4 + cVar8))) =
       *(int *)(&stack0x00000000 +
               CONCAT22((short)(uVar4 >> 0x10),CONCAT11(cVar6 + cVar9,(char)uVar4 + cVar8))) +
       (int)param_1;
  pcVar1 = (char *)(CONCAT44((int)((ulonglong)param_2 >> 0x20),uVar2) + unaff_RSI * 4);
  *pcVar1 = *pcVar1 + (byte)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

