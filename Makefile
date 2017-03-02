.PHONY: clean All

All:
	@echo "----------Building project:[ Assignment2_5 - Release ]----------"
	@cd "Assignment2_5" && "$(MAKE)" -f  "Assignment2_5.mk"
clean:
	@echo "----------Cleaning project:[ Assignment2_5 - Release ]----------"
	@cd "Assignment2_5" && "$(MAKE)" -f  "Assignment2_5.mk" clean
