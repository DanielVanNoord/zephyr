/* SPDX-License-Identifier: Apache-2.0 */

/* Board level DTS fixup file */

#define DT_ETH_E1000_BASE_ADDRESS	DT_INTEL_E1000_FEBC0000_BASE_ADDRESS
#define DT_ETH_E1000_IRQ		DT_INTEL_E1000_FEBC0000_IRQ_0
#define DT_ETH_E1000_IRQ_PRIORITY	DT_INTEL_E1000_FEBC0000_IRQ_0_PRIORITY
#define DT_ETH_E1000_IRQ_FLAGS	DT_INTEL_E1000_FEBC0000_IRQ_0_SENSE

#define DT_FLASH_DEV_NAME	DT_ZEPHYR_SIM_FLASH_SIM_FLASH_LABEL

#define DT_FLASH_SIM_BASE_ADDRESS	DT_SOC_NV_FLASH_0_BASE_ADDRESS
#define DT_FLASH_SIM_ERASE_BLOCK_SIZE	DT_SOC_NV_FLASH_0_ERASE_BLOCK_SIZE
#define DT_FLASH_SIM_SIZE		DT_SOC_NV_FLASH_0_SIZE
#define DT_FLASH_SIM_WRITE_BLOCK_SIZE	DT_SOC_NV_FLASH_0_WRITE_BLOCK_SIZE

/* End of Board Level DTS fixup file */
