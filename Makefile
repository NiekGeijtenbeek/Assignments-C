.PHONY: clean All

All:
	@echo "----------Building project:[ Assignment1_5 - Debug ]----------"
	@cd "Assignment1_5" && "$(MAKE)" -f  "Assignment1_5.mk"
clean:
	@echo "----------Cleaning project:[ Assignment1_5 - Debug ]----------"
	@cd "Assignment1_5" && "$(MAKE)" -f  "Assignment1_5.mk" clean
