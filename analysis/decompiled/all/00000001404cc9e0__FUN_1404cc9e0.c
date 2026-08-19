// Function: FUN_1404cc9e0
// Addr: 1404cc9e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc9e0(longlong param_1,uint *param_2)

{
  char *pcVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  longlong in_RAX;
  char *pcVar7;
  uint *puVar8;
  char cVar9;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int *piVar6;
  
  *(uint *)(&stack0x00000000 + in_RAX) = *(uint *)(&stack0x00000000 + in_RAX) & (uint)param_1;
  (&stack0x00000000)[unaff_RSI * 2] = (&stack0x00000000)[unaff_RSI * 2] + (char)param_1;
  uVar4 = (int)in_RAX + 0xe0000354;
  uVar5 = uVar4 ^ 0x35470600;
  piVar6 = (int *)(ulonglong)uVar5;
  *(char *)piVar6 = (char)*piVar6 + (char)param_1;
  *param_2 = *param_2 | 0x40021;
  (&stack0x00000000)[(longlong)piVar6] =
       (&stack0x00000000)[(longlong)piVar6] + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(unaff_RBX + (longlong)piVar6);
  *pcVar1 = *pcVar1 + (char)param_2;
  cVar9 = (char)(param_1 + -1);
  if (param_1 + -1 == 0 || *pcVar1 == '\0') {
    *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + cVar9;
    *param_2 = *param_2 | 0x60721;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar7 = (char *)((ulonglong)piVar6 ^ 0x3548d500);
  pcVar1 = (char *)(unaff_RBP + 0x21004a + (longlong)pcVar7 * 8);
  *pcVar1 = *pcVar1 + cVar9;
  *pcVar7 = *pcVar7 + (char)uVar4;
  pcVar1 = (char *)(unaff_RBP + 0xf01004a + (longlong)piVar6 * 8);
  *pcVar1 = *pcVar1 + cVar9;
  *piVar6 = *piVar6 + uVar5;
  if (uVar5 == 0) {
    puVar2 = (uint *)cpuid_basic_info(0);
  }
  else if (uVar5 == 1) {
    puVar2 = (uint *)cpuid_Version_info(1);
  }
  else if (uVar5 == 2) {
    puVar2 = (uint *)cpuid_cache_tlb_info(2);
  }
  else if (uVar5 == 3) {
    puVar2 = (uint *)cpuid_serial_info(3);
  }
  else if (uVar5 == 4) {
    puVar2 = (uint *)cpuid_Deterministic_Cache_Parameters_info(4);
  }
  else if (uVar5 == 5) {
    puVar2 = (uint *)cpuid_MONITOR_MWAIT_Features_info(5);
  }
  else if (uVar5 == 6) {
    puVar2 = (uint *)cpuid_Thermal_Power_Management_info(6);
  }
  else if (uVar5 == 7) {
    puVar2 = (uint *)cpuid_Extended_Feature_Enumeration_info(7);
  }
  else if (uVar5 == 9) {
    puVar2 = (uint *)cpuid_Direct_Cache_Access_info(9);
  }
  else if (uVar5 == 10) {
    puVar2 = (uint *)cpuid_Architectural_Performance_Monitoring_info(10);
  }
  else if (uVar5 == 0xb) {
    puVar2 = (uint *)cpuid_Extended_Topology_info(0xb);
  }
  else if (uVar5 == 0xd) {
    puVar2 = (uint *)cpuid_Processor_Extended_States_info(0xd);
  }
  else if (uVar5 == 0xf) {
    puVar2 = (uint *)cpuid_Quality_of_Service_info(0xf);
  }
  else if (uVar5 == 0x80000002) {
    puVar2 = (uint *)cpuid_brand_part1_info(0x80000002);
  }
  else if (uVar5 == 0x80000003) {
    puVar2 = (uint *)cpuid_brand_part2_info(0x80000003);
  }
  else if (uVar5 == 0x80000004) {
    puVar2 = (uint *)cpuid_brand_part3_info(0x80000004);
  }
  else {
    puVar2 = (uint *)cpuid(uVar5);
  }
  puVar8 = (uint *)(ulonglong)*puVar2;
  uVar4 = puVar2[1];
  bVar3 = (byte)*puVar2;
  *(byte *)puVar8 = (byte)*puVar8 + bVar3;
  *puVar8 = *puVar8 & uVar4;
  *(byte *)puVar8 = (byte)*puVar8 | bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

